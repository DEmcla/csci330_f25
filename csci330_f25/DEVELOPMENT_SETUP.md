# 🚀 Development Environment Setup Guide

## 🎯 Overview

Welcome to your C++ development journey! This guide will help you set up a professional C++ development environment using Docker, Git, and VSCode. By the end of this setup, you'll have a consistent development environment that works the same way regardless of whether you're using Windows, macOS, or Linux. **You've got this!**

### 📚 What You'll Learn to Use

- **🐳 Docker**: Creates a consistent development environment in a "container" (think of it as a clean, isolated computer just for your C++ work!)
- **📝 Git**: Tracks changes to your code and enables collaboration (like Google Docs for code!)
- **💻 VSCode**: A powerful code editor that integrates with Docker and Git (your new best friend for writing code!)

### ⏱️ Time Investment
- **Initial setup**: 30-45 minutes
- **Daily use**: Instant startup once configured!

---

## 📦 Part 1: Required Software Installation

Let's get the tools you need installed. Don't worry if this seems like a lot - we'll take it step by step!

### 1.1 Install Docker Desktop 🐳

Docker creates isolated environments called "containers" where your code runs consistently across different computers. Think of it as a virtual computer inside your computer!

#### 🪟 For Windows Users:

1. **Enable WSL2** (Windows Subsystem for Linux):
   - Open PowerShell as Administrator
   - Run: `wsl --install`
   - Restart your computer when prompted
   - ✅ This gives Windows some Linux superpowers!

2. **Download Docker Desktop**:
   - Go to [docker.com](https://docker.com)
   - Download "Docker Desktop for Windows"
   - During installation, ensure "Use WSL 2 instead of Hyper-V" is checked
   - Restart when prompted
   - 💡 **Tip**: Docker needs these restarts to properly integrate with Windows

3. **Configure Docker Desktop**:
   - Open Docker Desktop
   - Go to Settings → Resources → WSL Integration
   - Enable integration with your default WSL distro
   - Allocate at least 4GB of memory
   - ⚡ More memory = faster builds!

#### 🍎 For macOS Users:

1. **Download Docker Desktop**:
   - Go to [docker.com](https://docker.com)
   - Choose the correct version:
     - **Apple Silicon (M1/M2/M3 Macs)**: Docker Desktop for Apple Silicon
     - **Intel Macs**: Docker Desktop for Intel
   - Drag the app to your Applications folder
   - 🎯 Not sure which Mac you have? Click  → About This Mac

2. **Configure Docker Desktop**:
   - Launch Docker Desktop
   - Go to Preferences → Resources → Advanced
   - Allocate at least 4GB of memory
   - Grant necessary permissions when prompted
   - ✅ macOS will ask for permissions - say yes to all!

### 1.2 Install VSCode and Extensions 💻

VSCode is a free, powerful code editor that will integrate with your Docker environment. It's what professional developers use!

1. **Download VSCode**:
   - Go to [code.visualstudio.com](https://code.visualstudio.com)
   - Download for your operating system
   - Install with default settings

2. **Install Required Extensions**: 
   
   Open VSCode and install these extensions (press `Ctrl+Shift+X` on Windows, `Cmd+Shift+X` on macOS):
   
   - 🔧 **C/C++ Extension Pack** (includes everything you need for C++)
   - 📦 **Dev Containers** (for Docker integration)
   - 🐳 **Docker** (for managing containers)
   - 📊 **GitLens** (enhances Git capabilities)
   
   💡 **Pro tip**: Just search for each name and click the blue "Install" button!

### 1.3 Install Git 📝

Git tracks changes to your code and enables you to submit assignments. It's like a time machine for your code!

#### 🪟 For Windows Users:
- Download from [git-scm.com](https://git-scm.com)
- Use default installation options
- **⚠️ Important**: Configure line endings by running this in Command Prompt:
  ```bash
  git config --global core.autocrlf input
  git config --global core.eol lf
  ```
  🎯 This prevents the dreaded "^M" characters in your files!

#### 🍎 For macOS Users:

**Option 1**: Install via Homebrew (if you have it):
```bash
brew install git
```

**Option 2**: Install Xcode Command Line Tools:
```bash
xcode-select --install
```

#### 🌍 Configure Git (All Platforms):

Set up your identity (use your real name and school email):
```bash
git config --global user.name "Your Full Name"
git config --global user.email "your.email@university.edu"
```

✅ **Check**: Run `git --version` to verify installation!

---

## 🏗️ Part 2: Setting Up Your Development Environment

Now let's get your actual C++ workspace ready!

### 2.1 Download the Course Repository 📚

Clone the course repository to your computer:

```bash
# Navigate to where you want to store your coursework
cd Desktop  # or wherever you prefer

# Clone the course repository
git clone https://github.com/DEmcla/csci330_f25.git
cd csci330_f25
```

🎉 **Success!** You now have all the course materials on your computer!

### 2.2 Build Your Docker Environment 🐳

This creates your C++ development environment:

```bash
# Build the Docker container (this may take a few minutes the first time)
docker-compose build

# Test that it works
docker-compose run cpp-dev
```

☕ **First build taking a while?** This is normal! Docker is downloading and setting up everything you need. Grab a coffee!

If successful, you should see a Linux command prompt inside the container. Type `exit` to return to your normal terminal.

✅ **Victory!** If you see the Linux prompt, your environment is ready!

### 2.3 Set Up VSCode Integration 🔗

Create a folder called `.vscode` in your project directory and add this file:

**Create `.vscode/devcontainer.json`:**
```json
{
  "name": "C++ Development",
  "dockerComposeFile": "../docker-compose.yml",
  "service": "cpp-dev",
  "workspaceFolder": "/workspace",
  "extensions": [
    "ms-vscode.cpptools-extension-pack",
    "ms-vscode.cmake-tools"
  ],
  "settings": {
    "terminal.integrated.defaultProfile.linux": "bash"
  }
}
```

💡 **What does this do?** It tells VSCode to automatically use your Docker container when you open the project!

---

## 🎯 Part 3: Your Daily Development Workflow

Here's how you'll work with your environment every day - it becomes second nature quickly!

### 3.1 Starting Your Development Environment 🚀

1. **Open your project in VSCode**:
   - Open VSCode
   - File → Open Folder
   - Select your course directory

2. **Start the development container**:
   - Press `Ctrl+Shift+P` (Windows) or `Cmd+Shift+P` (macOS)
   - Type "Dev Containers: Reopen in Container"
   - Select it and wait for the container to start
   - 🎯 First time? This might take a minute. Future starts are much faster!

3. **You're ready to code!** 🎉
   - The terminal inside VSCode is now running in your Docker container
   - All your C++ tools are ready to use
   - Your files automatically sync between your computer and the container

### 3.2 Building and Testing Your Code 🔨

Navigate to an assignment directory and build:

```bash
# Go to assignment directory
cd /workspace/assignments/chapter_01

# Create build directory
mkdir -p build && cd build

# Configure the project
cmake ..

# Build your code
make

# Run tests (if available)
ctest --verbose
```

✅ **Success indicators**:
- `cmake ..` should say "Build files have been written"
- `make` should end with "[100%] Built target"
- Tests should show "Passed"

### 3.3 Basic Git Workflow 📝

Git helps you track changes and submit assignments. Here's the basic workflow:

#### 🧠 Understanding Git Concepts:
- **Repository (repo)** 📁: A folder that Git is tracking
- **Commit** 📸: A snapshot of your code at a specific time
- **Branch** 🌿: A separate line of development
- **Push** ☁️: Upload your changes to GitHub/GitLab

#### 💻 Daily Git Commands:

1. **Check the status of your files** 🔍:
   ```bash
   git status
   ```

2. **Create a new branch for your assignment** 🌿 (do this for each assignment):
   ```bash
   git checkout -b assignment-01
   ```

3. **Add your changes** ➕:
   ```bash
   # Add specific files
   git add src/main.cpp
   
   # Or add all changed files
   git add .
   ```

4. **Commit your changes** 📸:
   ```bash
   git commit -m "Implement basic calculator functions"
   ```
   💡 **Good commit messages** describe WHAT changed and WHY!

5. **Push your work to the remote repository** ☁️:
   ```bash
   git push origin assignment-01
   ```

---

## 📤 Part 4: Assignment Submission Process

Let's make sure you know exactly how to submit your work!

### 4.1 Completing an Assignment ✍️

1. **Create a branch for the assignment** 🌿:
   ```bash
   git checkout -b assignment-01
   ```

2. **Work on your code in the Docker environment** 💻:
   - Use VSCode with the Dev Container
   - Build and test frequently
   - Commit your changes regularly
   - 💡 **Pro tip**: Commit after each function works!

3. **Final submission** 🚀:
   ```bash
   # Make sure all your work is saved
   git add .
   git commit -m "Complete assignment 01 - final submission"
   git push origin assignment-01
   ```

4. **Submit to Canvas** 📚:
   - Copy your repository URL from GitHub/GitLab
   - Submit in this format:
     ```
     Repository URL: https://github.com/yourusername/cpp-assignment-01
     Branch: assignment-01
     Commit Hash: [copy from Git or GitHub]
     ```

### 4.2 Getting the Commit Hash 🔑

**Option 1: From command line:**
```bash
git log --oneline -1
```

**Option 2: From GitHub/GitLab:**
- Go to your repository online
- Click on the branch you pushed
- Copy the commit hash shown

✅ **Double-check**: The hash should be a 7-40 character string like `a3f5c9b`

---

## 🛠️ Part 5: Troubleshooting Common Issues

Don't panic! Every developer faces these issues. Here's how to fix them:

### 5.1 Docker Issues 🐳

#### 🪟 Windows-Specific Problems:

**Docker Desktop won't start:**
- ✅ Make sure WSL2 is enabled
- ✅ Check that "Windows Subsystem for Linux" and "Virtual Machine Platform" are enabled in Windows Features
- ✅ Restart Docker Desktop
- 💡 Still stuck? Try restarting Windows - it often helps!

**Permission errors:**
```bash
# In WSL2 terminal
sudo chown -R $USER:$USER /path/to/your/project
```

#### 🍎 macOS-Specific Problems:

**Docker needs permissions:**
- Go to System Preferences → Security & Privacy → Privacy
- Grant Docker Desktop access to your folders
- 🔑 macOS is protective - this is normal!

**Performance issues:**
- Increase memory allocation in Docker Desktop settings
- Enable "Use gRPC FUSE for file sharing"
- 💡 M1/M2 Macs? Make sure you downloaded the Apple Silicon version!

### 5.2 VSCode Issues 💻

**Container won't start:**
- ✅ Make sure Docker Desktop is running
- Try "Dev Containers: Rebuild Container" from Command Palette
- If still having issues:
  ```bash
  docker-compose down -v
  docker system prune -af
  ```
  ⚠️ This cleans everything - you'll need to rebuild!

**Code completion not working:**
- Make sure you're working inside the container
- Try reloading: "Developer: Reload Window" from Command Palette
- 🔄 Sometimes VSCode just needs a refresh!

### 5.3 Git Issues 📝

**"Repository not found" error:**
- ✅ Check that you have access to the repository
- ✅ Make sure you're using the correct URL
- ✅ Verify your Git credentials
- 💡 Try cloning with HTTPS instead of SSH

**Merge conflicts:**
- Always work in separate branches for each assignment
- Ask for help if you see conflict messages
- 🆘 Don't try to fix conflicts alone - ask your instructor!

**Large files causing problems:**
- Never commit build artifacts (files in `build/` folders)
- Check your `.gitignore` file includes:
  ```
  build/
  *.o
  *.exe
  *.out
  ```

---

## 🆘 Part 6: Getting Help

### 6.1 When Things Don't Work 🤔

1. **Read error messages carefully** 👀 - they often tell you exactly what's wrong
2. **Check the troubleshooting section above** 📖
3. **Ask classmates** 👥 - they might have encountered the same issue
4. **Search online** 🔍 - include the specific error message in your search
5. **Ask your instructor** 👨‍🏫 - provide the specific error message and what you were trying to do

💡 **Remember**: Every expert was once a beginner. Don't hesitate to ask for help!

### 6.2 Best Practices 🌟

- 📝 **Commit your work frequently** - at least after completing each function or major change
- 💬 **Use descriptive commit messages** - "Fix calculator bug" is better than "update"
- 🧪 **Test your code before submitting** - make sure it compiles and runs
- 📁 **Keep your repository organized** - don't commit unnecessary files
- ⏰ **Start assignments early** - setup issues are easier to resolve when you have time

---

## 📋 Quick Reference

### Essential Commands 🎯

**Docker:**
```bash
# Build your environment
docker-compose build

# Start development container
docker-compose run cpp-dev

# If on Windows and having issues, try:
docker-compose run --platform linux/amd64 cpp-dev
```

**Git:**
```bash
# Check status
git status

# Create new branch
git checkout -b assignment-name

# Add and commit changes
git add .
git commit -m "Descriptive message"

# Push to remote
git push origin assignment-name
```

**Building C++ Code:**
```bash
# In assignment directory
mkdir build && cd build
cmake ..
make
ctest --verbose  # run tests
```

**VSCode:**
- **Windows**: `Ctrl+Shift+P` opens Command Palette
- **macOS**: `Cmd+Shift+P` opens Command Palette
- Use "Dev Containers: Reopen in Container" to start development environment

---

## 🎉 Summary

**Congratulations!** You now have a professional C++ development environment that:
- ✅ Works consistently across different computers
- ✅ Integrates modern development tools
- ✅ Prepares you for industry-standard workflows
- ✅ Makes assignment submission straightforward

Remember: the initial setup might feel overwhelming, but once configured, this environment will make your C++ development much smoother throughout the course!

**You've got this! Happy coding!** 🚀💻🎯