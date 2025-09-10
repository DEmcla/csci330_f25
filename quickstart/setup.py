#!/usr/bin/env python3
"""
CSCI 330 - Cross-Platform Setup Script
Works on Windows, macOS, and Linux
"""

import os
import sys
import subprocess
import platform
import shutil
from pathlib import Path

# Colors for terminal output
class Colors:
    RED = '\033[91m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    BLUE = '\033[94m'
    RESET = '\033[0m'
    
    # Disable colors on Windows unless in Windows Terminal
    if platform.system() == 'Windows' and not os.environ.get('WT_SESSION'):
        RED = GREEN = YELLOW = BLUE = RESET = ''

def print_header():
    """Print welcome header"""
    print("=" * 50)
    print("   CSCI 330 Development Environment Setup")
    print("   Cross-Platform Automated Configuration")
    print("=" * 50)
    print()

def check_command(command):
    """Check if a command is available"""
    return shutil.which(command) is not None

def run_command(command, shell=False):
    """Run a command and return success status"""
    try:
        result = subprocess.run(command, shell=shell, capture_output=True, text=True)
        return result.returncode == 0, result.stdout, result.stderr
    except Exception as e:
        return False, "", str(e)

def detect_os():
    """Detect the operating system"""
    system = platform.system()
    if system == "Darwin":
        return "macOS"
    elif system == "Windows":
        return "Windows"
    elif system == "Linux":
        return "Linux"
    return "Unknown"

def check_docker():
    """Check Docker installation and status"""
    print("Checking Docker...")
    
    if not check_command("docker"):
        print(f"{Colors.RED}✗{Colors.RESET} Docker is not installed")
        print("\nPlease install Docker Desktop from: https://docker.com")
        print("After installing, run this script again.")
        return False
    
    print(f"{Colors.GREEN}✓{Colors.RESET} Docker is installed")
    
    # Check if Docker daemon is running
    success, _, _ = run_command(["docker", "info"])
    if not success:
        print(f"{Colors.YELLOW}!{Colors.RESET} Docker is installed but not running")
        print("Please start Docker Desktop and run this script again.")
        return False
    
    print(f"{Colors.GREEN}✓{Colors.RESET} Docker daemon is running")
    return True

def check_git():
    """Check Git installation"""
    print("\nChecking Git...")
    
    if not check_command("git"):
        print(f"{Colors.RED}✗{Colors.RESET} Git is not installed")
        
        os_type = detect_os()
        if os_type == "Windows":
            print("\nPlease install Git from: https://git-scm.com")
        elif os_type == "macOS":
            print("\nInstall via Homebrew: brew install git")
            print("Or download from: https://git-scm.com")
        else:
            print("\nInstall via package manager: sudo apt-get install git")
        return False
    
    success, output, _ = run_command(["git", "--version"])
    if success:
        print(f"{Colors.GREEN}✓{Colors.RESET} Git is installed: {output.strip()}")
    return True

def check_vscode():
    """Check VSCode installation"""
    print("\nChecking VSCode...")
    
    if not check_command("code"):
        print(f"{Colors.YELLOW}!{Colors.RESET} VSCode command line tools not found")
        print("\nTo enable VSCode command line:")
        print("1. Open VSCode")
        print("2. Press Cmd/Ctrl + Shift + P")
        print("3. Type: 'Shell Command: Install code command in PATH'")
        print("4. Select and run the command")
        return False
    
    print(f"{Colors.GREEN}✓{Colors.RESET} VSCode is installed")
    return True

def configure_git():
    """Configure Git settings"""
    print("\n" + "=" * 50)
    print("Configuring Git...")
    print("=" * 50)
    
    # Check current configuration
    success, name, _ = run_command(["git", "config", "--global", "user.name"])
    if not name.strip():
        name = input("Enter your full name for Git commits: ")
        run_command(["git", "config", "--global", "user.name", name])
        print(f"{Colors.GREEN}✓{Colors.RESET} Git name configured")
    else:
        print(f"{Colors.GREEN}✓{Colors.RESET} Git name already configured: {name.strip()}")
    
    success, email, _ = run_command(["git", "config", "--global", "user.email"])
    if not email.strip():
        email = input("Enter your email for Git commits: ")
        run_command(["git", "config", "--global", "user.email", email])
        print(f"{Colors.GREEN}✓{Colors.RESET} Git email configured")
    else:
        print(f"{Colors.GREEN}✓{Colors.RESET} Git email already configured: {email.strip()}")
    
    # Configure line endings for cross-platform compatibility
    run_command(["git", "config", "--global", "core.autocrlf", "input"])
    run_command(["git", "config", "--global", "core.eol", "lf"])
    print(f"{Colors.GREEN}✓{Colors.RESET} Git line endings configured for cross-platform compatibility")

def build_docker_image():
    """Build the Docker image"""
    print("\n" + "=" * 50)
    print("Building Docker Environment...")
    print("=" * 50)
    
    # Check for Dockerfile - try multiple locations
    dockerfile_path = Path("Dockerfile")
    if not dockerfile_path.exists():
        dockerfile_path = Path("quickstart/Dockerfile")
    if not dockerfile_path.exists():
        dockerfile_path = Path("../quickstart/Dockerfile")
    
    if not dockerfile_path.exists():
        print(f"{Colors.YELLOW}!{Colors.RESET} Dockerfile not found")
        print("Make sure you're running this script from the project root or quickstart directory")
        return False
    
    print("Building Docker image (this may take 2-5 minutes)...")
    print("(You'll see lots of output - this is normal!)")
    
    build_context = dockerfile_path.parent
    success, output, error = run_command(
        ["docker", "build", "-t", "csci330-dev", str(build_context)]
    )
    
    if success:
        print(f"\n{Colors.GREEN}✓{Colors.RESET} Docker image built successfully!")
        return True
    else:
        print(f"\n{Colors.RED}✗{Colors.RESET} Docker build failed")
        print("Error:", error)
        return False

def install_vscode_extensions():
    """Install VSCode extensions"""
    if not check_command("code"):
        return
    
    print("\n" + "=" * 50)
    print("Installing VSCode Extensions...")
    print("=" * 50)
    
    extensions = [
        "ms-vscode.cpptools-extension-pack",
        "ms-azuretools.vscode-docker", 
        "ms-vscode-remote.remote-containers",
        "eamodio.gitlens"
    ]
    
    for ext in extensions:
        print(f"Installing {ext}...")
        success, _, _ = run_command(["code", "--install-extension", ext])
        if success:
            print(f"  {Colors.GREEN}✓{Colors.RESET} Installed")
        else:
            print(f"  {Colors.YELLOW}!{Colors.RESET} Already installed or error")

def create_test_program():
    """Create and test a simple C++ program"""
    print("\n" + "=" * 50)
    print("Creating Test Program...")
    print("=" * 50)
    
    # Create test directory
    test_dir = Path("test_setup")
    test_dir.mkdir(exist_ok=True)
    
    # Create test program
    test_file = test_dir / "hello.cpp"
    test_file.write_text("""#include <iostream>
using namespace std;

int main() {
    cout << "✅ Setup successful! Your C++ environment is working!" << endl;
    cout << "You're ready to start CSCI 330!" << endl;
    return 0;
}
""")
    
    print(f"{Colors.GREEN}✓{Colors.RESET} Test program created")
    
    # Test compilation
    print("\nTesting compilation...")
    
    # Get absolute path for volume mounting
    workspace_path = str(test_dir.absolute())
    
    # Compile
    if platform.system() == "Windows":
        # Windows path conversion for Docker
        workspace_path = workspace_path.replace("\\", "/")
        if workspace_path[1] == ":":
            # Convert C: to /c/
            workspace_path = "/" + workspace_path[0].lower() + workspace_path[2:]
    
    compile_cmd = [
        "docker", "run", "--rm",
        "-v", f"{workspace_path}:/workspace",
        "csci330-dev",
        "g++", "-o", "/workspace/hello", "/workspace/hello.cpp"
    ]
    
    success, _, error = run_command(compile_cmd)
    if not success:
        print(f"{Colors.RED}✗{Colors.RESET} Compilation failed")
        print("Error:", error)
        return False
    
    # Run the program
    run_cmd = [
        "docker", "run", "--rm",
        "-v", f"{workspace_path}:/workspace",
        "csci330-dev",
        "/workspace/hello"
    ]
    
    success, output, _ = run_command(run_cmd)
    if success:
        print(f"{Colors.GREEN}✓{Colors.RESET} Test compilation successful!")
        print("\nProgram output:")
        print(output)
        return True
    else:
        print(f"{Colors.RED}✗{Colors.RESET} Test execution failed")
        return False

def main():
    """Main setup routine"""
    print_header()
    
    os_type = detect_os()
    print(f"Detected OS: {Colors.BLUE}{os_type}{Colors.RESET}\n")
    
    # Check prerequisites
    print("=" * 50)
    print("Checking Prerequisites...")
    print("=" * 50)
    
    docker_ok = check_docker()
    git_ok = check_git()
    vscode_ok = check_vscode()
    
    if not docker_ok:
        print(f"\n{Colors.RED}Setup cannot continue without Docker.{Colors.RESET}")
        sys.exit(1)
    
    if not git_ok:
        print(f"\n{Colors.YELLOW}Warning: Git is required for assignments.{Colors.RESET}")
    
    # Configure Git if available
    if git_ok:
        configure_git()
    
    # Build Docker image
    if not build_docker_image():
        print(f"\n{Colors.RED}Setup failed during Docker build.{Colors.RESET}")
        sys.exit(1)
    
    # Install VSCode extensions if available
    if vscode_ok:
        install_vscode_extensions()
    
    # Test the setup
    create_test_program()
    
    # Print summary
    print("\n" + "=" * 50)
    print(f"{Colors.GREEN}   SETUP COMPLETE!{Colors.RESET}")
    print("=" * 50)
    print("\nNext steps:")
    print("1. Open VSCode in this directory: code .")
    print("2. When prompted, click 'Reopen in Container'")
    print("3. Start working on your assignments!")
    print("\nIf you encounter issues:")
    print("- Run: python verify_setup.py")
    print("- Check: setup/docker_troubleshooting.md")
    print("")

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print(f"\n{Colors.YELLOW}Setup cancelled by user.{Colors.RESET}")
        sys.exit(1)
    except Exception as e:
        print(f"\n{Colors.RED}Unexpected error: {e}{Colors.RESET}")
        sys.exit(1)