# HW_04: Object Lifecycle and RAII

## Overview
This assignment explores constructors, destructors, and Resource Acquisition Is Initialization (RAII) as covered in Chapter 4 of "C++ Crash Course".

## Related Module
📚 **[Module 04 - Chapter 4: Object Lifecycle](../)**

## Learning Objectives
- Master the C++ object lifecycle (construction, use, destruction)
- Write constructors (default, parameterized, copy)
- Implement destructors for resource cleanup
- Apply RAII principles for automatic resource management
- Understand the Rule of Three
- Debug lifecycle issues with proper logging

## Assignment Tasks
Complete TWO comprehensive projects (4 hours total):

### Project 1: Banking System with RAII (2 hours)
1. **Account Class**: Constructors, destructors, transaction logging
2. **Resource Management**: Automatic file handle cleanup
3. **Rule of Three**: Copy constructor and assignment operator
4. **Lifecycle Tracking**: Log object creation and destruction

### Project 2: Resource Management Framework (2 hours)
1. **File Wrapper**: RAII for file handles
2. **Memory Pool**: Custom memory management
3. **Smart Resource**: Template for any resource type
4. **Exception Safety**: Cleanup in all scenarios

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./banking_system      # Run project 1
./resource_manager    # Run project 2
make test
```

## Grading Criteria
- [ ] Both programs compile without warnings
- [ ] Proper constructor/destructor implementation
- [ ] RAII principles correctly applied
- [ ] Rule of Three properly implemented
- [ ] Resource cleanup verified (no leaks)
- [ ] Lifecycle logging demonstrates understanding

## Time Allocation
- **Banking System**: 2 hours
- **Resource Manager**: 2 hours
- **Total**: 4 hours (matches assignments.md specification)