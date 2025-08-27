# HW_05: Runtime Polymorphism

## Overview
This assignment explores inheritance, virtual functions, and runtime polymorphism as covered in Chapter 5 of "C++ Crash Course".

## Related Module
📚 **[Module 05 - Chapter 5: Runtime Polymorphism](../)**

## Learning Objectives
- Create polymorphic class hierarchies using virtual functions
- Implement abstract base classes with pure virtual functions
- Use the override keyword for safe function overriding
- Apply polymorphism through base class pointers and references
- Design flexible systems using runtime polymorphism

## Assignment Tasks
Complete THREE problem sets (2.25 hours total):

### Problem Set 1: Basic Inheritance (45 minutes)
1. **Animal Hierarchy**: Base Animal class with virtual functions
2. **Shape System**: Abstract Shape with Circle, Rectangle, Triangle
3. **Virtual Destructors**: Proper cleanup in hierarchies

### Problem Set 2: Advanced Polymorphism (45 minutes)
1. **Game Characters**: RPG character system with abilities
2. **UI Components**: Button, TextBox, Slider with events
3. **Plugin System**: Dynamic loading of behaviors

### Problem Set 3: Practical Applications (45 minutes)
1. **Employee Management**: Different employee types with salary calculation
2. **Drawing Application**: Polymorphic shapes with rendering
3. **Command Pattern**: Undo/redo with virtual execute()

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./polymorphism_demo
make test
```

## Grading Criteria
- [ ] Program compiles without warnings
- [ ] Virtual functions correctly implemented
- [ ] Proper use of override keyword
- [ ] Abstract base classes work correctly
- [ ] Polymorphic behavior demonstrated
- [ ] Virtual destructors prevent memory leaks

## Time Allocation
- **Problem Set 1**: 45 minutes
- **Problem Set 2**: 45 minutes
- **Problem Set 3**: 45 minutes
- **Total**: 2.25 hours