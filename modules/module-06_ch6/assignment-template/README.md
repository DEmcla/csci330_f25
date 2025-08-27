# HW_06: Compile-Time Polymorphism (Templates)

## Overview
This assignment explores templates and generic programming as covered in Chapter 6 of "C++ Crash Course".

## Related Module
📚 **[Module 06 - Chapter 6: Compile-Time Polymorphism](../)**

## Learning Objectives
- Create function templates for generic operations
- Implement class templates for reusable containers
- Understand template instantiation and specialization
- Apply SFINAE and type traits basics
- Compare compile-time vs runtime polymorphism

## Assignment Tasks
Complete THREE problem sets (2.25 hours total):

### Problem Set 1: Function Templates (45 minutes)
1. **Generic Min/Max**: Template functions for any comparable type
2. **Array Operations**: Generic sum, average, find functions
3. **Type Safety**: Demonstrate compile-time type checking

### Problem Set 2: Class Templates (45 minutes)
1. **Generic Container**: Simple vector-like container template
2. **Pair/Triple**: Multi-value holder templates
3. **Stack Template**: Generic stack implementation

### Problem Set 3: Advanced Templates (45 minutes)
1. **Template Specialization**: Special behavior for specific types
2. **Variadic Templates**: Functions with variable arguments
3. **Type Traits**: Basic compile-time type checking

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./templates_demo
make test
```

## Grading Criteria
- [ ] Program compiles without warnings
- [ ] Function templates work with multiple types
- [ ] Class templates properly instantiated
- [ ] Template specialization demonstrated
- [ ] No runtime overhead from templates
- [ ] All tests pass

## Time Allocation
- **Problem Set 1**: 45 minutes
- **Problem Set 2**: 45 minutes
- **Problem Set 3**: 45 minutes
- **Total**: 2.25 hours
