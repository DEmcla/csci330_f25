# CSCI 330 - Advanced C++ Programming

**🎯 Your Single Starting Point for the Course**

Welcome to modern C++ programming! This course teaches professional C++ development through hands-on projects, industry-standard tools, and real-world practices.

---

## 🚀 Getting Started (New Students)

### 1. **First Time Setup** ⚙️
- **📋 [Complete Environment Setup](setup/DEVELOPMENT_SETUP.md)** - Docker, VS Code, Git (30-45 min)
- **📖 [Learn Git Workflow](setup/GIT_WORKFLOW.md)** - Professional Pull Request submissions
- **✅ [Verify Your Setup](setup/test_integration.sh)** - Test that everything works

### 2. **Understand the Course Structure**
- **📚 [Course Modules](#-course-modules)** - 14 mandatory modules + 4 optional
- **🎯 [Semester Project](project/)** - Build something substantial and portfolio-worthy
- **📝 [Assignment Submissions](assignments/)** - Professional Pull Request workflow

### 3. **Start Learning**
- **📖 Read textbook chapter FIRST** (Josh Lospinoso's "C++ Crash Course")
- **📋 Work through course materials** in each chapter directory
- **💻 Submit via Pull Request** when complete

---

## 📚 Course Modules

### **Core Curriculum (Mandatory)**
All students complete these 14 modules:

| Chapter | Topic | Directory | Focus |
|---------|-------|-----------|-------|
| **01** | Up and Running | [modules/module-01_ch1/](modules/module-01_ch1/) | Environment, first programs |
| **02** | Types and Memory | [modules/module-02_ch2/](modules/module-02_ch2/) | Fundamental types, debugging |
| **03** | References | [modules/module-03_ch3/](modules/module-03_ch3/) | Pointers and references |
| **04** | Object Lifecycle | [modules/module-04_ch4/](modules/module-04_ch4/) | Constructors, destructors, RAII |
| **05** | Runtime Polymorphism | [modules/module-05_ch5/](modules/module-05_ch5/) | Virtual functions, inheritance |
| **06** | Compile-Time Polymorphism | [modules/module-06_ch6/](modules/module-06_ch6/) | Templates, generic programming |
| **07** | Expressions | [modules/module-07_ch7/](modules/module-07_ch7/) | Operators, operator overloading |
| **08** | Statements | [modules/module-08_ch8/](modules/module-08_ch8/) | Control flow, exceptions |
| **09** | Functions | [modules/module-09_ch9/](modules/module-09_ch9/) | Lambdas, function objects |
| **11** | Smart Pointers | [modules/module-11_ch11/](modules/module-11_ch11/) | Modern memory management |
| **12** | Utilities | [modules/module-12_ch12/](modules/module-12_ch12/) | Standard library utilities |
| **13** | Containers | [modules/module-13_ch13/](modules/module-13_ch13/) | STL containers |
| **14** | Iterators | [modules/module-14_ch14/](modules/module-14_ch14/) | Iterator patterns |
| **15** | Strings | [modules/module-15_ch15/](modules/module-15_ch15/) | Text processing |

### **Supplemental Chapters (Optional)**
Choose based on time and interest:

| Chapter | Topic | Directory | When to Use |
|---------|-------|-----------|-------------|
| **10** | Testing | [supplemental/chapter-10/](supplemental/chapter-10/) | Professional testing practices |
| **16** | Streams | [supplemental/chapter-16/](supplemental/chapter-16/) | File I/O operations |
| **17** | Filesystems | [supplemental/chapter-17/](supplemental/chapter-17/) | File system manipulation |
| **18** | Algorithms | [supplemental/chapter-18/](supplemental/chapter-18/) | STL algorithms |

---

## 🎯 Semester Project

Build something substantial and portfolio-worthy over 15 weeks:

- **📋 [Project Overview](project/semester-project.md)** - Goals and requirements
- **💡 [Brainstorming Guide](project/brainstorming-guide.md)** - Find your perfect project
- **🏗️ [Project Phases](project/phases/)** - 5-phase development process
- **👥 [Peer Reviews](project/peer-review-forms.md)** - Collaborative feedback

---

## 📝 Assignment Submission

This course uses **professional Pull Request workflow**:

### Quick Submission Process
1. **Create feature branch**: `git checkout -b week01-assignment-name`
2. **Complete work** in your assignment directory
3. **Submit Pull Request** with complete template
4. **Address feedback** and iterate
5. **Merge when approved**

**📖 Complete Guide**: [assignments/README.md](assignments/README.md)

---

## 🆘 Need Extra Help? Bridge Tutorials Available!

**Struggling with assignments?** These optional tutorials teach practical skills that assignments assume you know:

| Tutorial | When to Use | Time | What You'll Learn |
|----------|-------------|------|------------------|
| **🛠️ [VS Code Mastery](modules/module-01_ch1/tutorial-vscode-mastery.md)** | After Ch 1 | 30-45 min | Debugging, shortcuts, Git workflow |
| **🧪 [Testing Patterns](modules/module-02_ch2/tutorial-testing-patterns.md)** | After Ch 2 | 45-60 min | Systematic testing, input validation |
| **🏗️ [Project Organization](modules/module-03_ch3/tutorial-project-organization.md)** | After Ch 3 | 30-45 min | Multi-file projects, professional structure |

**💡 Pro Tip**: Complete these tutorials when you first struggle with assignments - they'll save hours of frustration!

---

## 📖 Chapter Workflow

Every chapter follows the same structure for consistency:

### For Each Chapter:
1. **📚 Read textbook chapter FIRST** - Essential foundation
2. **📋 Review [lecture-notes.md](modules/module-01_ch1/lecture-notes.md)** - Course-specific content  
3. **🛠️ Consider bridge tutorials** - Optional help with practical skills
4. **🧩 Complete [assignments.md](modules/module-01_ch1/assignments.md)** - Hands-on practice
5. **🔧 Use [quick-help.md](modules/module-01_ch1/quick-help.md)** - Troubleshooting and references
6. **🐛 Follow debugging guides** (where applicable)
7. **✅ Submit via Pull Request**

---

## 🛠️ Development Environment

### **Docker + VS Code** (Recommended)
- Consistent environment across all platforms
- Professional debugging tools
- Integrated testing framework

### **Quick Commands**
```bash
# Start environment
cd setup/
docker-compose up -d cpp-dev

# Enter container
docker-compose exec cpp-dev bash

# Build and test
mkdir build && cd build
cmake .. && make && ctest
```

**📖 Complete Setup Guide**: [setup/DEVELOPMENT_SETUP.md](setup/DEVELOPMENT_SETUP.md)

---

## 📚 Quick References

### Essential Resources
- **🔧 [Git Commands](reference/git-commands.md)** - Essential Git workflow commands
- **🆘 [Troubleshooting](setup/docker_troubleshooting.md)** - Common issues and solutions  
- **📋 [Assignment Templates](assignment-templates/)** - Starting code for projects

### Course Materials
- **📖 Textbook**: "C++ Crash Course" by Josh Lospinoso
- **💻 Development Environment**: Docker + VS Code + Git
- **🎯 Assessment**: Pull Request submissions + Semester project

---

## 🎓 Learning Approach

### **Reading-First Workflow** (Critical for Success)
1. **📖 Read textbook chapter** thoroughly first (1-2 hours)
2. **🎯 Review learning objectives** - Know what you're aiming for
3. **💻 Work through course materials** actively
4. **🧩 Complete assignments** with understanding focus
5. **✅ Submit and iterate** based on feedback

### **Time Management**
- **Budget 6-8 hours per chapter** (reading + assignments)
- **Plan 12-15 hours per week** for the full course
- **Don't rush** - understanding > speed
- **Ask for help** after 2+ hours stuck on same problem

---

## 🆘 Getting Help

### When You're Stuck
1. **📋 Check chapter [quick-help.md](modules/module-01_ch1/quick-help.md)**
2. **🔍 Use VS Code debugger** - Visualize what's happening
3. **📖 Review [reference materials](reference/)**  
4. **👥 Ask classmates** or study groups
5. **🏢 Office hours** - Don't struggle alone!

### **2-Hour Rule**: If stuck on same problem for 2+ hours, seek help immediately.

---

## 🌟 Success Tips

- **🔄 Commit frequently** - Small, meaningful commits
- **🐛 Debug systematically** - Use the visual debugger
- **📚 Connect to textbook** - Course reinforces book concepts
- **💪 Challenge yourself** - Try optional chapters and advanced features
- **🤝 Collaborate professionally** - Help others, learn from feedback

---

**🎯 Ready to start?** Begin with [Chapter 1: Up and Running](modules/module-01_ch1/) after completing your [environment setup](setup/DEVELOPMENT_SETUP.md).

**Questions?** Check the [reference materials](reference/) or ask in office hours!

---

*Course developed with professional Git workflow, Docker containerization, and industry best practices. Designed for students ready to master systems programming.*