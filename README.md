# C++ Learning Journey

This repository documents my journey of learning C++ through consistent coding practice, problem-solving, and software-engineering fundamentals.

The goal is to build strong C++ fundamentals, develop problem-solving ability, understand Data Structures & Algorithms deeply, and prepare for software engineering interviews and professional software development.

---

## Repository Structure

- Basics
- Statements & Operators
- Controlling Program Flow
- Arrays & Vectors
- Functions
- Characters & Strings
- Pointers
- STL
- OOP

Each folder contains practice programs, exercises, and examples completed while learning that topic.

---

## Progress

### Completed Topics

- Basics
- Statements & Operators
- Controlling Program Flow
- Arrays & Vectors
- Functions
- Characters & Strings

### Pointers

- What is a Pointer
- Dynamic Memory
- Const Pointers
- Passing Pointers to Functions
- Returning Pointers
- References

### OOP Foundation

- Classes & Objects

- Constructors
  - Parameterized Constructors
  - Constructor Overloading
  - Member Initializer Lists

- Encapsulation
  - Private Members
  - Public Members
  - Getters & Setters
  - Controlling Access to Data

- Inheritance
  - Base Class
  - Derived Class
  - Public Inheritance
  - Protected Members
  - Single Inheritance
  - Multilevel Inheritance
  - Multiple Inheritance
  - Hierarchical Inheritance
  - Hybrid Inheritance

- Polymorphism
  - Compile-time Polymorphism
  - Runtime Polymorphism
  - Function Overloading
  - Function Overriding
  - Virtual Functions
  - Base-class Pointers
  - Virtual Destructors

- Abstraction
  - Pure Virtual Functions
  - Abstract Classes
  - Implementing Abstraction Through Inheritance

### STL Foundation

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

### Copy Semantics & Resource Management

- Copy Constructor
- Copy Assignment Operator
- `const` References
- `this` and `*this`
- Shallow Copy
- Deep Copy
- Dynamic Memory Ownership
- Self-Assignment
- Resource Cleanup with Destructors

### Operator Overloading

- Operator Overloading
- Overloading the `+` operator
- Passing objects to overloaded operators
- Returning objects from overloaded operators
- Working with dynamically allocated data
- Overloading the `+=` operator
- Modifying the left-hand object with `+=`
- Returning the current object by reference with `return *this`

---

## Current Focus

- Strengthening C++ OOP
- Operator Overloading
- Copy Semantics and Resource Management
- Data Structures & Algorithms
- Problem Solving
- Writing Clean and Maintainable C++

---

## Latest Learning Log

### 2 September 2026 — Operator Overloading Practice

Continued C++ OOP by revisiting operator overloading and extending the previous `operator+` implementation.

#### Practice

- Reviewed what operator overloading is and why it is useful
- Reviewed the difference between `operator+` and `operator+=`
- Implemented a custom `operator+=` for the `Student` class
- Modified the existing object's dynamically allocated `marks` value
- Ensured the right-hand object remained unchanged
- Used `Student&` as the return type
- Returned the current object using `return *this`
- Tested the implementation with `s1 = 90` and `s2 = 80`
- Verified that `s1` became `170` while `s2` remained `80`

The focus was understanding the difference between creating a new result with `+` and modifying the existing left-hand object with `+=`, including why `operator+=` returns the current object by reference.

---

## Learning Approach

For every topic, I follow this workflow:

1. Learn the concept
2. Understand the underlying logic
3. Predict the output before running the code
4. Write code from scratch
5. Debug mistakes independently
6. Practice with multiple problems
7. Review the completed topic
8. Organize the repository
9. Commit and push progress to GitHub

The focus is on demonstrated understanding and independent problem-solving rather than simply completing a list of topics.

---

## Repository Goals

- Build strong C++ fundamentals
- Develop problem-solving skills from first principles
- Understand Data Structures & Algorithms deeply
- Write clean, readable, and maintainable C++
- Understand object-oriented programming and software design fundamentals
- Prepare for technical interviews
- Develop habits used in professional software engineering
- Prepare for software engineering roles

---

## Future Topics

### OOP

- Advanced Operator Overloading
- Advanced Inheritance Concepts
- Advanced OOP Concepts

### C++ Fundamentals & Modern C++

- Smart Pointers
- Exception Handling
- File I/O
- Lambda Expressions
- Modern C++ Features
- Advanced C++

### Data Structures & Algorithms

- Advanced Data Structures
- Algorithmic Patterns
- Problem Solving
- Interview-Oriented DSA Practice

---

## About This Repository

This repository is a record of my learning journey rather than a collection of finished projects.

Every program represents a concept I have learned, practiced, debugged, and understood while building a strong foundation in C++.

The repository will continue to grow as I learn new concepts, solve coding challenges, and build larger software projects.

---

⭐ **Consistency over intensity. Deep understanding matters more than the number of topics completed.**