# 🚀 CSCI 330 - Quick Development Environment Setup

## Welcome Students!

This folder contains everything you need to set up your C++ development environment in minutes, not hours!

## 📁 What's in This Folder?

- **`setup.py`** - Automated setup script (works on all operating systems)
- **`verify_setup.py`** - Diagnostic tool to check if everything works
- **`README.md`** - Quick start guide with troubleshooting
- **`Dockerfile`** - Simplified Docker configuration for C++ development
- **`Dockerfile.full`** - Full-featured Docker configuration (advanced)
- **`docker-compose.yml`** - Docker Compose configuration for VSCode integration

## 🎯 Setup Instructions (3 Steps, ~10 minutes)

### Step 1: Install Required Software

Download and install these three programs:

1. **Docker Desktop** 
   - Download: [docker.com](https://docker.com)
   - Choose your operating system version
   - Run installer with default settings
   - **Important**: Start Docker Desktop after installing!

2. **Visual Studio Code (VSCode)**
   - Download: [code.visualstudio.com](https://code.visualstudio.com)
   - Run installer with default settings
   
3. **Git**
   - Download: [git-scm.com](https://git-scm.com)
   - Run installer with default settings

### Step 2: Run the Setup Script

Open a terminal/command prompt and navigate to this folder:

```bash
# On Windows: Use PowerShell or Command Prompt
# On Mac/Linux: Use Terminal

# Navigate to the quickstart folder
cd path/to/csci330_f25/quickstart

# Run the setup script
python setup.py
```

The script will:
- ✅ Check that all software is installed correctly
- ✅ Configure Git with your name and email
- ✅ Build the Docker environment
- ✅ Install VSCode extensions
- ✅ Test that C++ compilation works

### Step 3: Verify Everything Works

```bash
python verify_setup.py
```

You should see all green checkmarks (✓). If you see any red X's, follow the fix instructions shown.

## 🆘 Troubleshooting

### Common Issues and Solutions

| Problem | Solution |
|---------|----------|
| "Docker daemon is not running" | Start Docker Desktop and wait 30 seconds |
| "Permission denied" | Windows: Run as Administrator<br>Mac/Linux: Use `sudo python setup.py` |
| "Docker build failed" | Check internet connection and try again |
| "Python not found" | Install Python 3 from [python.org](https://python.org) |
| Script won't run | Try: `python3 setup.py` instead of `python setup.py` |

### Getting Help

If you're still stuck:

1. Run the diagnostic tool and save output:
   ```bash
   python verify_setup.py > my_setup_log.txt
   ```

2. Send `my_setup_log.txt` to your instructor

3. Or come to office hours with your laptop

## ✅ How to Know You're Ready

After successful setup, you should be able to:

1. Run `docker --version` and see version info
2. Run `git --version` and see version info  
3. Run `code --version` and see version info
4. Open VSCode and see the Docker and C++ extensions installed
5. The verify script shows all green checkmarks

## 📝 Next Steps

Once setup is complete:

1. Go back to the main project directory:
   ```bash
   cd ..
   ```

2. Open the project in VSCode:
   ```bash
   code .
   ```

3. When VSCode opens, look for a notification asking to "Reopen in Container" - click it!

4. You're now ready to start coding in C++!

## 🎥 Video Walkthrough

Having trouble? Watch the setup video (link will be provided by instructor).

## 📋 Manual Setup

If the automated scripts don't work, see the manual setup instructions in `README.md`.

---

**Remember**: This setup only needs to be done once! After that, you just open VSCode and start coding.

Good luck with CSCI 330! 🎉