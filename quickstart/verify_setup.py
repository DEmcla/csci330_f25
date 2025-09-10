#!/usr/bin/env python3
"""
CSCI 330 - Setup Verification and Diagnostic Tool
Helps identify and fix common setup issues
"""

import os
import sys
import subprocess
import platform
import shutil
from pathlib import Path

class Colors:
    RED = '\033[91m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    BLUE = '\033[94m'
    RESET = '\033[0m'
    
    if platform.system() == 'Windows' and not os.environ.get('WT_SESSION'):
        RED = GREEN = YELLOW = BLUE = RESET = ''

def run_command(command, shell=False):
    """Run a command and return success status"""
    try:
        result = subprocess.run(command, shell=shell, capture_output=True, text=True)
        return result.returncode == 0, result.stdout, result.stderr
    except Exception as e:
        return False, "", str(e)

def check_component(name, check_func):
    """Check a component and print status"""
    print(f"\nChecking {name}...")
    status, message, fix = check_func()
    
    if status == "ok":
        print(f"  {Colors.GREEN}✓{Colors.RESET} {message}")
        return True
    elif status == "warning":
        print(f"  {Colors.YELLOW}⚠{Colors.RESET} {message}")
        if fix:
            print(f"  {Colors.BLUE}→ Fix:{Colors.RESET} {fix}")
        return True
    else:
        print(f"  {Colors.RED}✗{Colors.RESET} {message}")
        if fix:
            print(f"  {Colors.BLUE}→ Fix:{Colors.RESET} {fix}")
        return False

def check_docker():
    """Check Docker installation and configuration"""
    if not shutil.which("docker"):
        return "error", "Docker is not installed", "Install Docker Desktop from https://docker.com"
    
    success, version, _ = run_command(["docker", "--version"])
    if not success:
        return "error", "Docker command failed", "Reinstall Docker Desktop"
    
    success, _, _ = run_command(["docker", "info"])
    if not success:
        os_type = platform.system()
        if os_type == "Darwin":
            return "error", "Docker daemon is not running", "Open Docker Desktop from Applications"
        elif os_type == "Windows":
            return "error", "Docker daemon is not running", "Start Docker Desktop from Start Menu"
        else:
            return "error", "Docker daemon is not running", "Run: sudo systemctl start docker"
    
    # Check if image exists
    success, output, _ = run_command(["docker", "images", "csci330-dev", "--format", "{{.Repository}}"])
    if not success or "csci330-dev" not in output:
        return "warning", "Docker is running but image not built", "Run: python setup.py"
    
    return "ok", f"Docker is properly configured ({version.strip()})", None

def check_git():
    """Check Git installation and configuration"""
    if not shutil.which("git"):
        os_type = platform.system()
        if os_type == "Windows":
            return "error", "Git is not installed", "Download from https://git-scm.com"
        elif os_type == "Darwin":
            return "error", "Git is not installed", "Run: xcode-select --install"
        else:
            return "error", "Git is not installed", "Run: sudo apt-get install git"
    
    success, version, _ = run_command(["git", "--version"])
    if not success:
        return "error", "Git command failed", "Reinstall Git"
    
    # Check configuration
    success, name, _ = run_command(["git", "config", "--global", "user.name"])
    success2, email, _ = run_command(["git", "config", "--global", "user.email"])
    
    if not name.strip() or not email.strip():
        return "warning", "Git installed but not configured", "Run: python setup.py to configure"
    
    return "ok", f"Git is properly configured ({version.strip()})", None

def check_vscode():
    """Check VSCode installation"""
    if not shutil.which("code"):
        os_type = platform.system()
        if os_type == "Darwin":
            fix = "Open VSCode → Cmd+Shift+P → 'Shell Command: Install code command'"
        elif os_type == "Windows":
            fix = "Open VSCode → Ctrl+Shift+P → 'Shell Command: Install code command'"
        else:
            fix = "Install VSCode from https://code.visualstudio.com"
        return "warning", "VSCode CLI not available", fix
    
    # Check for required extensions
    success, output, _ = run_command(["code", "--list-extensions"])
    if success:
        extensions = output.lower()
        required = ["cpptools", "docker", "remote-containers"]
        missing = [ext for ext in required if ext not in extensions]
        
        if missing:
            return "warning", f"VSCode installed but missing extensions: {', '.join(missing)}", "Run: python setup.py"
    
    return "ok", "VSCode is properly configured", None

def check_project_structure():
    """Check if project structure is correct"""
    # Check if we're in quickstart or root directory
    in_quickstart = Path("setup.py").exists() and Path("verify_setup.py").exists()
    in_root = Path("chapters").exists() or Path("assignments").exists()
    
    if not in_quickstart and not in_root:
        # Try parent directory
        parent_has_chapters = Path("../chapters").exists()
        if parent_has_chapters:
            return "warning", "Running from quickstart directory", "This is fine - continue"
        return "error", "Not in project directory", "Navigate to csci330_f25 directory first"
    
    return "ok", "Project structure is correct", None

def check_disk_space():
    """Check available disk space"""
    import shutil
    
    total, used, free = shutil.disk_usage("/")
    free_gb = free // (2**30)
    
    if free_gb < 2:
        return "error", f"Only {free_gb}GB free space available", "Free up disk space (need at least 2GB)"
    elif free_gb < 5:
        return "warning", f"Only {free_gb}GB free space available", "Consider freeing up space for better performance"
    
    return "ok", f"{free_gb}GB free space available", None

def check_network():
    """Check network connectivity"""
    # Try to reach Docker Hub
    success, _, _ = run_command(["ping", "-c", "1", "hub.docker.com"] if platform.system() != "Windows" 
                                else ["ping", "-n", "1", "hub.docker.com"])
    
    if not success:
        return "warning", "Cannot reach Docker Hub", "Check internet connection or proxy settings"
    
    return "ok", "Network connectivity is good", None

def test_compilation():
    """Test C++ compilation in Docker"""
    if not shutil.which("docker"):
        return "error", "Cannot test - Docker not installed", None
    
    success, _, _ = run_command(["docker", "images", "csci330-dev", "--format", "{{.Repository}}"])
    if not success or "csci330-dev" not in _:
        return "error", "Cannot test - Docker image not built", "Run: python setup.py"
    
    # Create test file
    test_dir = Path("test_verify")
    test_dir.mkdir(exist_ok=True)
    
    test_file = test_dir / "test.cpp"
    test_file.write_text('#include <iostream>\nint main() { std::cout << "OK\\n"; return 0; }')
    
    # Test compilation
    workspace = str(test_dir.absolute())
    if platform.system() == "Windows":
        workspace = workspace.replace("\\", "/")
        if workspace[1] == ":":
            workspace = "/" + workspace[0].lower() + workspace[2:]
    
    success, output, error = run_command([
        "docker", "run", "--rm",
        "-v", f"{workspace}:/workspace",
        "csci330-dev",
        "sh", "-c", "g++ -o /workspace/test /workspace/test.cpp && /workspace/test"
    ])
    
    # Clean up
    import shutil
    shutil.rmtree(test_dir, ignore_errors=True)
    
    if success and "OK" in output:
        return "ok", "C++ compilation works correctly", None
    else:
        return "error", f"Compilation test failed: {error}", "Check Docker setup and try rebuilding: python setup.py"

def main():
    """Main verification routine"""
    print("=" * 60)
    print("   CSCI 330 Setup Verification Tool")
    print("=" * 60)
    
    os_type = platform.system()
    print(f"\nSystem: {Colors.BLUE}{os_type}{Colors.RESET}")
    print(f"Python: {Colors.BLUE}{sys.version.split()[0]}{Colors.RESET}")
    
    all_ok = True
    
    # Run all checks
    checks = [
        ("Project Structure", check_project_structure),
        ("Disk Space", check_disk_space),
        ("Network", check_network),
        ("Docker", check_docker),
        ("Git", check_git),
        ("VSCode", check_vscode),
        ("C++ Compilation", test_compilation),
    ]
    
    for name, check_func in checks:
        if not check_component(name, check_func):
            all_ok = False
    
    # Print summary
    print("\n" + "=" * 60)
    if all_ok:
        print(f"{Colors.GREEN}✓ All checks passed!{Colors.RESET}")
        print("\nYour development environment is ready.")
        print("\nQuick start:")
        print("1. Open VSCode: code .")
        print("2. Click 'Reopen in Container' when prompted")
        print("3. Open a terminal in VSCode")
        print("4. Navigate to your assignment: cd assignments/CSCI330_YourName")
        print("5. Start coding!")
    else:
        print(f"{Colors.YELLOW}⚠ Some issues were found{Colors.RESET}")
        print("\nPlease fix the issues above and run this script again.")
        print("\nNeed help?")
        print("- Check: setup/docker_troubleshooting.md")
        print("- Ask in class or office hours")
        print("- Email instructor with the output of this script")
    
    print("")

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print(f"\n{Colors.YELLOW}Verification cancelled.{Colors.RESET}")
    except Exception as e:
        print(f"\n{Colors.RED}Error: {e}{Colors.RESET}")
        import traceback
        traceback.print_exc()