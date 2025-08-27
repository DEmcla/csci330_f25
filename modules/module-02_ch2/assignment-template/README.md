# HW_02: Types and Memory

## Overview
This assignment explores C++ fundamental types, arrays, structs, and basic pointer operations as covered in Chapter 2 of "C++ Crash Course".

## Related Module
📚 **[Module 02 - Chapter 2: Types](../)**

## Learning Objectives
- Master fundamental C++ types and their sizes
- Understand type conversions (implicit and explicit)
- Work with arrays and demonstrate safe indexing
- Create and use structs to group data
- Explore basic pointer operations and memory addresses

## Assignment Tasks
Complete TWO comprehensive programs (3 hours total):

### Program 1: Type Explorer (90 minutes)
1. **Type Analysis**: Display sizes and ranges of fundamental types
2. **Type Conversions**: Demonstrate implicit/explicit conversions
3. **Practical Application**: Multi-unit converter (temperature, distance)
4. **Memory Behavior**: Show initialization and scope differences

### Program 2: Student Manager (90 minutes)
1. **Struct Design**: Create Student struct with multiple fields
2. **Array Operations**: Manage array of students with grades
3. **Pointer Arithmetic**: Process arrays using pointers
4. **Statistics**: Calculate averages and find min/max

## Building and Testing
```bash
mkdir build && cd build
cmake ..
make
./type_explorer    # Run first program
./student_manager  # Run second program
make test
```

## Submission Guidelines
1. Complete all TODO items in the source code
2. Ensure your program compiles without warnings
3. Test your program with various inputs
4. Follow the naming convention: `CSCI330_FirstName_LastName`

## Grading Criteria
- [ ] Both programs compile without warnings
- [ ] Demonstrates understanding of all fundamental types
- [ ] Correct use of arrays and bounds checking
- [ ] Proper struct implementation
- [ ] Basic pointer operations work correctly
- [ ] All tests pass

## Time Allocation
- **Type Explorer**: 90 minutes
- **Student Manager**: 90 minutes
- **Total**: 3 hours