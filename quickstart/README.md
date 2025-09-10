# 🚀 CSCI 330 Quick Start Guide

## Setup in 3 Steps (10 minutes)

### Step 1: Install Required Software
- [ ] **Docker Desktop**: [docker.com](https://docker.com) (required)
- [ ] **VSCode**: [code.visualstudio.com](https://code.visualstudio.com) (required)
- [ ] **Git**: [git-scm.com](https://git-scm.com) (required)

### Step 2: Run Automated Setup
```bash
# On Windows: Use PowerShell or Command Prompt
# On Mac/Linux: Use Terminal

python setup.py
```

This script will:
- ✅ Check all software is installed
- ✅ Configure Git for you
- ✅ Build the Docker environment
- ✅ Install VSCode extensions
- ✅ Test everything works

### Step 3: Verify Everything Works
```bash
python verify_setup.py
```

You should see all green checkmarks!

---

## 🆘 Having Problems?

### Quick Fixes for Common Issues

#### "Docker daemon is not running"
- **Windows**: Start Docker Desktop from Start Menu
- **Mac**: Open Docker Desktop from Applications
- **Both**: Wait 30 seconds for it to fully start

#### "Permission denied" errors
- **Windows**: Run PowerShell as Administrator
- **Mac/Linux**: Use `sudo python setup.py`

#### "Docker build failed"
- Make sure Docker Desktop is running
- Check internet connection
- Try: `docker pull gcc:latest` first

#### "VSCode won't open in container"
1. Open VSCode
2. Press `Ctrl/Cmd + Shift + P`
3. Type: "Reload Window"
4. Try "Reopen in Container" again

### Still Stuck?

Run the diagnostic tool:
```bash
python verify_setup.py > my_setup_log.txt
```

Send `my_setup_log.txt` to your instructor for help.

---

## 📝 Daily Workflow

Once setup is complete, your daily workflow is simple:

### Starting Work
1. Open Terminal/PowerShell
2. Navigate to project: `cd path/to/csci330_f25`
3. Open VSCode: `code .`
4. Click "Reopen in Container" when prompted
5. Start coding!

### Submitting Assignments
```bash
# Create your branch
git checkout -b assignment-1

# Add your work
git add .
git commit -m "Complete assignment 1"

# Push to GitHub
git push origin assignment-1
```

Then create a Pull Request on GitHub.

---

## 💡 Pro Tips

1. **First time?** The Docker build takes 3-5 minutes. Get coffee!
2. **Slow computer?** Close other applications while Docker runs
3. **Low disk space?** You need at least 5GB free
4. **Behind firewall?** May need to configure proxy settings

---

## 📊 Setup Checklist

Use this to track your progress:

- [ ] Docker Desktop installed and running
- [ ] Git installed and configured with your name/email
- [ ] VSCode installed with C++ extensions
- [ ] Successfully ran `python setup.py`
- [ ] All checks pass in `python verify_setup.py`
- [ ] Tested compilation with Hello World program
- [ ] Opened project in VSCode container

Once all boxes are checked, you're ready for CSCI 330!

---

## 🔧 Manual Setup (if automated fails)

If the automated setup doesn't work, here's what it does:

1. **Configure Git**:
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --global core.autocrlf input
git config --global core.eol lf
```

2. **Build Docker Image**:
```bash
cd setup
docker build -t csci330-dev .
```

3. **Install VSCode Extensions**:
Open VSCode and install:
- C/C++ Extension Pack
- Docker
- Dev Containers
- GitLens

4. **Test It Works**:
```bash
# Create test file
echo '#include <iostream>
int main() { std::cout << "Hello!\\n"; }' > test.cpp

# Compile with Docker
docker run --rm -v $(pwd):/workspace csci330-dev g++ /workspace/test.cpp -o /workspace/test

# Run it
docker run --rm -v $(pwd):/workspace csci330-dev /workspace/test
```

If you see "Hello!" then everything works!