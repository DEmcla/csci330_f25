# Assignment Template Realignment Plan
**Critical Fix Required: Current assignments are from Data Structures course, not C++ language course**

## 📋 Executive Summary
Only 1 out of 14 module assignment templates correctly aligns with the C++ Crash Course textbook. The current templates teach data structures and algorithms rather than C++ language features. This plan provides a complete realignment strategy.

---

## 🎯 Assignment Redesign by Module

### Module 1 - Chapter 1: Up and Running ✅
**Current**: Introduction to C++ - Problem Sets  
**Status**: CORRECT - Keep as is
**Topics**: Hello World, basic program structure, compilation, simple I/O

---

### Module 2 - Chapter 2: Types ❌
**Current**: Hello World and Basic I/O (WRONG - duplicate of Ch1)  
**New Assignment**: **HW_02: C++ Type System Exploration**

**Assignment Components**:
1. **Type Size Explorer**
   - Use sizeof() to explore fundamental types (int, double, char, bool, etc.)
   - Display type ranges using <climits> and <cfloat>
   - Demonstrate signed vs unsigned behavior

2. **Type Conversion Lab**
   - Implicit vs explicit conversions
   - Narrowing conversions and data loss
   - static_cast<> usage

3. **Arrays and Pointers Introduction**
   - Create and manipulate fixed-size arrays
   - Basic pointer operations and dereferencing
   - Array-pointer relationship

4. **Simple Struct Design**
   - Create a Student struct with multiple types
   - Demonstrate struct initialization methods
   - Show memory layout with sizeof()

---

### Module 3 - Chapter 3: Reference Types ❌
**Current**: Vectors and Control Structures (WRONG - Ch13/Ch8 content)  
**New Assignment**: **HW_03: References and Const Correctness**

**Assignment Components**:
1. **Reference Basics**
   - Pass-by-value vs pass-by-reference functions
   - Reference vs pointer comparison
   - References as return values

2. **Const Correctness Workshop**
   - const variables and references
   - const member functions
   - const_cast usage (with warnings)

3. **Auto Type Deduction**
   - Using auto with different types
   - auto with references and const
   - decltype demonstrations

4. **Practical Application**
   - Swap function using references
   - Matrix operations with const references
   - Performance comparison: copy vs reference

---

### Module 4 - Chapter 4: Object Life Cycle ❌
**Current**: Functions and String Manipulation (WRONG - Ch9/Ch15 content)  
**New Assignment**: **HW_04: RAII and Object Management**

**Assignment Components**:
1. **Constructor Workshop**
   - Default, parameterized, and copy constructors
   - Constructor initialization lists
   - Delegating constructors

2. **Destructor and RAII**
   - Resource management class (FileWrapper)
   - Automatic cleanup demonstration
   - Rule of Three implementation

3. **Object Lifecycle Tracking**
   - Log object creation/destruction
   - Demonstrate stack vs heap lifetime
   - Show temporary object creation

4. **Move Semantics Preview**
   - Basic move constructor
   - Move assignment operator
   - std::move usage

---

### Module 5 - Chapter 5: Runtime Polymorphism ❌
**Current**: File I/O and Data Processing (WRONG - not a chapter topic)  
**New Assignment**: **HW_05: Inheritance and Virtual Functions**

**Assignment Components**:
1. **Inheritance Hierarchy**
   - Shape → Circle, Rectangle, Triangle
   - Protected vs private inheritance
   - Base class pointer to derived objects

2. **Virtual Functions**
   - Pure virtual functions (abstract classes)
   - Virtual destructors importance
   - Override keyword usage

3. **Polymorphic Behavior**
   - Dynamic dispatch demonstration
   - Virtual function table exploration
   - Performance implications

4. **Practical Design**
   - Animal hierarchy with sounds
   - Employee hierarchy with salary calculation
   - Game character system with abilities

---

### Module 6 - Chapter 6: Compile-Time Polymorphism ❌
**Current**: Object-Oriented Programming - Classes (WRONG - not templates)  
**New Assignment**: **HW_06: Templates and Generic Programming**

**Assignment Components**:
1. **Function Templates**
   - Generic min/max functions
   - Swap template
   - Array operations template

2. **Class Templates**
   - Generic Container class
   - Pair/Triple templates
   - Stack template implementation

3. **Template Specialization**
   - Full and partial specialization
   - SFINAE basics
   - Type traits introduction

4. **Variadic Templates**
   - Print function with variable arguments
   - Recursive template unpacking
   - Perfect forwarding basics

---

### Module 7 - Chapter 7: Expressions ❌
**Current**: Algorithm Analysis - Sorting (WRONG - not a chapter topic)  
**New Assignment**: **HW_07: Operators and Expression Evaluation**

**Assignment Components**:
1. **Operator Precedence Lab**
   - Expression evaluation exercises
   - Parentheses impact
   - Common precedence mistakes

2. **Operator Overloading**
   - Complex number class with +, -, *, /
   - Stream operators << and >>
   - Comparison operators

3. **Bitwise Operations**
   - Flag management with bitwise ops
   - Bit manipulation puzzles
   - Efficient calculations using shifts

4. **Expression Templates**
   - Lazy evaluation demonstration
   - Chained operations
   - Performance implications

---

### Module 8 - Chapter 8: Statements ❌
**Current**: Stacks and Queues (WRONG - data structures content)  
**New Assignment**: **HW_08: Control Flow Mastery**

**Assignment Components**:
1. **Advanced Conditionals**
   - Nested if-else optimization
   - Switch with fallthrough
   - Conditional operator chains

2. **Loop Variations**
   - Range-based for loops
   - Do-while vs while
   - Loop control with break/continue

3. **Scope and Initialization**
   - If/switch with initializers (C++17)
   - Scope guards
   - RAII in control structures

4. **Error Handling Flow**
   - Return codes vs exceptions
   - Early return patterns
   - Resource cleanup in all paths

---

### Module 9 - Chapter 9: Functions ❌
**Current**: Linked Lists (WRONG - data structures content)  
**New Assignment**: **HW_09: Modern Function Design**

**Assignment Components**:
1. **Function Basics**
   - Overloading
   - Default arguments
   - Inline functions

2. **Lambda Expressions**
   - Capture modes [=], [&], [this]
   - Generic lambdas
   - Lambda as parameters

3. **Function Objects**
   - Functors
   - std::function wrapper
   - Callable concepts

4. **Advanced Techniques**
   - Perfect forwarding
   - Tail recursion
   - Constexpr functions

---

### Module 10 - Chapter 11: Smart Pointers ❌
**Current**: MISSING  
**New Assignment**: **HW_11: Memory Management with Smart Pointers**

**Assignment Components**:
1. **unique_ptr Mastery**
   - Single ownership scenarios
   - Custom deleters
   - make_unique usage

2. **shared_ptr and weak_ptr**
   - Reference counting
   - Circular reference breaking
   - make_shared benefits

3. **Memory Safety**
   - Converting raw pointers
   - RAII with smart pointers
   - Common pitfalls

4. **Real-World Application**
   - Tree structure with smart pointers
   - Observer pattern implementation
   - Resource pool management

---

### Module 11 - Chapter 12: Utilities ❌
**Current**: MISSING  
**New Assignment**: **HW_12: Modern C++ Utilities**

**Assignment Components**:
1. **Move Semantics Deep Dive**
   - std::move and std::forward
   - Move-only types
   - Performance optimization

2. **Optional and Variant**
   - std::optional for nullable values
   - std::variant for type-safe unions
   - Error handling without exceptions

3. **Tuple and Any**
   - std::tuple operations
   - std::any for type erasure
   - Structured bindings

4. **Time and Chrono**
   - Duration calculations
   - Time point operations
   - Performance timing

---

### Module 12 - Chapter 13: Containers ❌
**Current**: Graph Algorithms (WRONG - advanced DS content)  
**New Assignment**: **HW_13: STL Container Mastery**

**Assignment Components**:
1. **Sequential Containers**
   - vector vs deque vs list
   - Performance characteristics
   - Iterator invalidation

2. **Associative Containers**
   - map/set vs unordered versions
   - Custom comparators
   - Multi variants

3. **Container Adaptors**
   - stack, queue, priority_queue
   - Custom underlying containers
   - Performance tuning

4. **Real Application**
   - Student database with multiple indexes
   - Cache implementation
   - Event system with priority

---

### Module 13 - Chapter 14: Iterators ❌
**Current**: Advanced Sorting (WRONG - algorithms content)  
**New Assignment**: **HW_14: Iterator Patterns and Ranges**

**Assignment Components**:
1. **Iterator Categories**
   - Input, output, forward, bidirectional, random
   - Iterator traits
   - Iterator adaptors

2. **Custom Iterators**
   - Writing your own iterator
   - Sentinel types
   - Iterator facades

3. **Algorithms and Iterators**
   - Algorithm requirements
   - Iterator-based algorithms
   - Parallel algorithms

4. **Ranges Preview**
   - Range concepts
   - View compositions
   - Lazy evaluation

---

### Module 14 - Chapter 15: Strings ❌
**Current**: Dynamic Programming (WRONG - algorithms content)  
**New Assignment**: **HW_15: String Processing and Manipulation**

**Assignment Components**:
1. **String Operations**
   - std::string methods
   - String views for efficiency
   - Raw string literals

2. **String Algorithms**
   - Searching and replacing
   - Tokenization
   - Case conversion

3. **Regular Expressions**
   - Pattern matching
   - Capture groups
   - Replace operations

4. **Unicode and Encoding**
   - UTF-8 handling
   - Wide strings
   - Locale considerations

---

## 📊 Implementation Priority

### Phase 1 - Critical Fixes (Week 1)
1. Module 2 - Fix duplicate Hello World
2. Module 3 - Replace with Reference Types
3. Module 4 - Replace with Object Life Cycle

### Phase 2 - Core Language Features (Week 2)
4. Module 5 - Runtime Polymorphism
5. Module 6 - Templates
6. Module 7 - Expressions
7. Module 8 - Statements
8. Module 9 - Functions

### Phase 3 - Modern C++ (Week 3)
9. Module 10 - Smart Pointers (create new)
10. Module 11 - Utilities (create new)
11. Module 12 - Containers
12. Module 13 - Iterators
13. Module 14 - Strings

---

## ✅ Success Metrics
- Each assignment directly reinforces textbook chapter concepts
- Progressive difficulty building on previous modules
- Mix of conceptual understanding and practical application
- Modern C++ practices emphasized throughout
- Clear alignment between reading → lecture notes → assignments

---

## 🚀 Next Steps
1. Review and approve this plan
2. Prioritize which modules to fix first
3. Create new assignment templates with starter code
4. Update Canvas assignments to match
5. Communicate changes to students if course is active

**Estimated Time**: 2-3 hours per module for complete redesign
**Total Effort**: 30-40 hours for full realignment