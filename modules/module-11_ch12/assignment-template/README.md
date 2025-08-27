# HW_12: Utilities and Move Semantics

## Overview
This assignment explores modern C++ utilities and move semantics as covered in Chapter 12 of "C++ Crash Course".

## Related Module
📚 **[Module 11 - Chapter 12: Utilities](../)**

## Learning Objectives
- Master move semantics and std::move
- Understand perfect forwarding with std::forward
- Implement std::optional for nullable types
- Use std::variant for type-safe unions
- Apply modern C++ utility classes effectively

## Assignment Tasks
Complete THREE problem sets (2.25 hours total):

### Problem Set 1: Move Semantics Fundamentals (45 minutes)
1. **Move Constructors**: Efficient resource transfer
2. **Move Assignment**: Assignment with move semantics
3. **std::move**: Explicit move requests

### Problem Set 2: Modern Utility Types (45 minutes)
1. **std::optional**: Nullable types without pointers
2. **std::variant**: Type-safe discriminated unions
3. **std::any**: Type-erased value storage

### Problem Set 3: Advanced Utilities (45 minutes)
1. **Perfect Forwarding**: std::forward template patterns
2. **std::tuple**: Multi-value containers
3. **Utility Functions**: swap, exchange, and more

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./utilities_demo
make test
```

## Grading Criteria
- [ ] Correct move semantics implementation
- [ ] Effective use of std::optional
- [ ] Proper std::variant usage
- [ ] Understanding of perfect forwarding
- [ ] Modern C++ utility application

## Time Allocation
- **Problem Set 1**: 45 minutes
- **Problem Set 2**: 45 minutes
- **Problem Set 3**: 45 minutes
- **Total**: 2.25 hours