# Assignment Templates - CSCI 330

## 📋 Purpose
This folder contains **starter code templates** for each assignment. Students copy these templates to their personal submission directory following the naming convention.

## 🏗️ Structure

```
assignment-templates/
├── HW_01/                 # Introduction to C++
├── HW_02/                 # Hello World and Basic I/O
├── HW_03/                 # Vectors and Control Structures
├── HW_04/                 # Functions and String Manipulation
├── HW_05/                 # File I/O and Data Processing
├── HW_06/                 # Object-Oriented Programming - Classes
├── HW_07/                 # Algorithm Analysis - Sorting Algorithms
├── HW_08/                 # Stacks and Queues
├── HW_09/                 # Linked Lists
├── HW_11/                 # Binary Search Trees
├── HW_12/                 # Hash Tables
├── HW_13/                 # Graph Algorithms
├── HW_14/                 # Advanced Sorting
└── HW_15/                 # Dynamic Programming

Each template contains:
├── CMakeLists.txt         # Build configuration
├── README.md              # Assignment description and objectives
├── src/                   # Source code directory
│   ├── main.cpp           # Starter code with TODOs
│   └── CMakeLists.txt
├── tests/                 # Unit tests
│   ├── test_main.cpp      # Test cases for your code
│   └── CMakeLists.txt
├── include/               # Header files (if needed)
└── docs/                  # Documentation
```

## 📝 How to Use These Templates

### Step 1: Copy Template to Your Directory
```bash
# Create your personal submission directory (first time only)
mkdir -p assignments/CSCI330_FirstName_LastName/week01

# Copy the template for the current assignment
cp -r assignment-templates/HW_01/* assignments/CSCI330_FirstName_LastName/week01/
```

### Step 2: Complete the Assignment
1. Navigate to your copy:
   ```bash
   cd assignments/CSCI330_FirstName_LastName/week01
   ```

2. Edit the source files to complete the TODOs

3. Build and test your code:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ./tests/test_main
   ```

### Step 3: Submit via Pull Request
Follow the submission workflow in `/assignments/README.md`

## 🧪 About the Test Files

Each assignment template includes test files:

### `tests/test_main.cpp`
- **Purpose**: Unit tests for your implementation
- **Usage**: Verifies your code works correctly
- **Note**: These test YOUR code, not the environment

### Binary Test Files (if present)
- `test_compile` - Verifies code compiles
- `test_unit` - Runs unit tests
- `test_main` - Runs main program tests

## ⚠️ Important Notes

1. **DO NOT MODIFY** the template files directly
2. **ALWAYS COPY** templates to your personal directory
3. **NAMING CONVENTION**: Use `CSCI330_FirstName_LastName` format
4. **TESTS MUST PASS**: Ensure all provided tests pass before submission

## 🔧 Environment Testing

For testing your development environment setup (Docker, VS Code, Git), use:
```bash
./setup/test_integration.sh
```

This is DIFFERENT from assignment tests - it verifies your tools are configured correctly.

## 📂 Workflow Summary

```
assignment-templates/HW_01/  ──copy──>  assignments/CSCI330_John_Doe/week01/
         (Template)                              (Your Work)
              ↓                                        ↓
        Never Modified                          Modified & Submitted
```

## 🆘 Common Issues

### "Where do I put my code?"
In YOUR directory: `assignments/CSCI330_FirstName_LastName/weekXX/`

### "Can I modify the template?"
NO - copy it first, then modify your copy

### "Tests won't compile"
Check that you're in the build directory and CMake ran successfully

### "How do I know if my environment is set up?"
Run `./setup/test_integration.sh` from the repository root

---

**Remember**: Templates are starting points. Your completed work goes in your personal assignments directory!