# C++ Learning Journey

This repository documents my C++ learning through practical implementation, problem-solving, and software-engineering fundamentals.

The goal is to build strong C++ fundamentals for DSA, interviews, and professional software development.

---

## Repository Structure

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

### September 18, 2026 — Copy Semantics & Resource Management

- Implemented a resource-owning `MyArray` class using dynamic memory.
- Implemented a destructor to release dynamically allocated resources.
- Implemented a deep-copy constructor with independent memory allocation.
- Implemented copy assignment with resource release, deep copying, and self-assignment protection.
- Tested copy independence by modifying the original and verifying that the copied object remained independent.
- Re-learned move semantics from first principles, including lvalues, rvalues, and the role of `std::move`.
- Implemented a move constructor that transfers ownership of the existing allocation and leaves the source object with `nullptr`.
- Implemented move assignment with old-resource release, ownership transfer, size transfer, and self-move protection.
- Tested moved-to and moved-from object states and verified ownership transfer through independent checks.
- Reviewed the differences between copy construction, copy assignment, move construction, and move assignment.
- Reviewed why resource ownership must be handled explicitly when a class manages dynamic memory.
- Tested and debugged the implementations successfully.

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