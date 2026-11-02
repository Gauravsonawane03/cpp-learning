# C++ Learning Journey

This repository documents my C++ learning through practical implementation, problem-solving, and software-engineering fundamentals.

The goal is to build strong C++ fundamentals for DSA, interviews, and professional software development.

---

## Repository Structure

```text
C++
├── Basics
├── Statements & Operators
├── Controlling Program Flow
├── Arrays & Vectors
├── Functions
├── Characters & Strings
├── Pointers
├── STL
└── OOP
```

---

## Progress

### Foundations
- C++ Basics
- Statements & Operators
- Control Flow
- Arrays & Vectors
- Functions
- Characters & Strings
- Pointers
- References

### STL
- Templates
- `std::array`
- `std::vector`
- Iterators
- STL Algorithms
- `std::deque`
- `std::list`
- `std::stack`
- `std::queue`
- `std::priority_queue`
- `std::set`
- `std::map`
- `std::unordered_map`
- `std::unordered_set`

### OOP
- Classes & Objects
- Constructors
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
- Copy Semantics
- Resource Management
- Operator Overloading
- Move Semantics

---

## Current Focus

**OOP Strengthening**

Currently working on:
- Copy semantics
- Deep copy and shallow copy
- Copy constructors
- Copy assignment operators
- Self-assignment protection
- Resource management
- Dynamic memory ownership
- Destructors and resource release
- Move semantics
- Move constructors
- Move assignment operators
- Ownership transfer
- Moved-from object state
- Independent implementation
- Testing and debugging

---

## Latest Learning Log

### November 2, 2026 — Rule of Five: IntArray

- Implemented a new resource-owning `IntArray` class using dynamically allocated integer arrays.
- Implemented a constructor for dynamic memory allocation and a destructor for resource cleanup using `delete[]`.
- Implemented a copy constructor with independent memory allocation and element-by-element copying.
- Verified deep-copy independence by modifying the copied object without affecting the original.
- Implemented copy assignment with self-assignment protection, existing-resource cleanup, and deep copying.
- Tested copy assignment between objects with different array sizes.
- Verified self-assignment and preservation of the original object.
- Implemented a move constructor that transfers the existing allocation without copying elements.
- Ensured moved-from objects enter a valid empty state (`nullptr`, size `0`).
- Implemented move assignment with self-move protection, destination-resource cleanup, and ownership transfer.
- Tested move construction and move assignment using actual array data.
- Verified self-move assignment and preservation of the object's contents.
- Tested resource ownership and destruction behavior across copy and move operations.
- Compiled and executed the implementation with AddressSanitizer to check for memory errors.

---

## Learning Approach

For each topic:
1. Understand the concept
2. Reason about how it works
3. Implement it independently
4. Test and debug
5. Review edge cases
6. Commit the work

The focus is on demonstrated understanding rather than simply completing topics.

---

## Goal

Build strong C++ fundamentals, write clean and maintainable code, and develop the programming foundation required for DSA, interviews, and software engineering.

---

⭐ Consistency over intensity. Deep understanding matters more than the number of topics completed.