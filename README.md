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

### October 2, 2026 — Buffer Rule of Five

- Continued the resource-owning `buffer` class implementation from copy assignment.
- Implemented copy assignment with self-assignment protection, old-resource release, size transfer, deep copying, and correct ownership handling.
- Verified deep-copy independence by modifying the original object without affecting the assigned object.
- Tested copying objects with different sizes and verified that all elements and the correct size were transferred.
- Tested self-assignment and verified that the object remained valid.
- Implemented a move constructor that transfers the existing allocation without copying and leaves the source in an empty moved-from state (`nullptr`, size `0`).
- Implemented move assignment with self-move protection, old-resource release, ownership transfer, and moved-from state handling.
- Verified move construction and move assignment using actual object data.
- Tested self-move assignment and verified that the object remained valid.
- Reviewed ownership behavior across copy construction, copy assignment, move construction, move assignment, and destruction.
- Verified that the destructor releases owned memory with `delete[]` and that destruction of a moved-from object is safe.
- Tested the major cases individually and debugged implementation issues successfully.
- Current capability: **Implemented → Applied**. Retention will require later independent implementation on a fresh resource-owning problem.

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