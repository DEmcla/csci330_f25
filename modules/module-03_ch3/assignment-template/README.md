# HW_03: References and Const Correctness

## Overview
This assignment explores C++ references, const correctness, and the auto keyword as covered in Chapter 3 of "C++ Crash Course".

## Related Module
📚 **[Module 03 - Chapter 3: Reference Types](../)**

## Learning Objectives
- Create and use references as aliases to existing variables
- Master const correctness to prevent accidental modifications
- Distinguish between references and pointers
- Use the auto keyword for type deduction
- Apply references in function parameters for efficiency

## Assignment Tasks
Complete THREE problem sets (2.25 hours total):

### Problem Set 1: Basic References (45 minutes)
1. **Reference Fundamentals**: Create and use basic references
2. **References vs Copies**: Show references are aliases, not copies
3. **Multiple References**: Multiple references to same object

### Problem Set 2: Functions with References (45 minutes)
1. **Swap Function**: Classic swap using references
2. **Efficient Parameter Passing**: Large struct passing
3. **Return by Reference**: Safe reference returns

### Problem Set 3: Const Correctness (45 minutes)
1. **Const References**: Read-only access to data
2. **Const Methods**: Member functions that don't modify
3. **Auto Type Deduction**: Using auto with references

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./references_demo
make test
```

## Grading Criteria
- [ ] Program compiles without warnings
- [ ] Demonstrates correct reference usage
- [ ] Proper const correctness implementation
- [ ] Shows understanding of reference vs pointer differences
- [ ] Auto keyword used appropriately
- [ ] All tests pass

## Time Allocation
- **Problem Set 1**: 45 minutes
- **Problem Set 2**: 45 minutes  
- **Problem Set 3**: 45 minutes
- **Total**: 2.25 hours