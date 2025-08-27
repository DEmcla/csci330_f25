# HW_11: Smart Pointers and RAII

## Overview
This assignment explores smart pointers and RAII (Resource Acquisition Is Initialization) as covered in Chapter 11 of "C++ Crash Course".

## Related Module
📚 **[Module 10 - Chapter 11: Smart Pointers](../)**

## Learning Objectives
- Master RAII principles for automatic resource management
- Understand unique_ptr for exclusive ownership
- Implement shared_ptr for shared ownership scenarios
- Use weak_ptr to break circular references
- Apply modern C++ memory management best practices

## Assignment Tasks
Complete THREE problem sets (2.25 hours total):

### Problem Set 1: RAII and Resource Management (45 minutes)
1. **RAII Fundamentals**: Resource acquisition and automatic cleanup
2. **Traditional Pointers**: Problems with manual memory management
3. **Smart Pointer Introduction**: Modern C++ approach

### Problem Set 2: Unique and Shared Pointers (45 minutes)
1. **unique_ptr**: Exclusive ownership and move semantics
2. **shared_ptr**: Reference counting and shared ownership
3. **Pointer Operations**: Reset, release, get, and custom deleters

### Problem Set 3: Advanced Smart Pointer Usage (45 minutes)
1. **weak_ptr**: Breaking circular references
2. **Custom Deleters**: Specialized cleanup functions
3. **Performance Considerations**: When to use each pointer type

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./smart_pointers_demo
make test
```

## Grading Criteria
- [ ] Correct RAII implementation
- [ ] Proper unique_ptr usage for exclusive ownership
- [ ] Effective shared_ptr for shared resources
- [ ] Understanding of weak_ptr benefits
- [ ] Memory leak prevention

## Time Allocation
- **Problem Set 1**: 45 minutes
- **Problem Set 2**: 45 minutes
- **Problem Set 3**: 45 minutes
- **Total**: 2.25 hours