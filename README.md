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
  - Accessing Protected Members Through a Derived Class
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

---

## Current Focus

- Strengthening C++ OOP
- Copy Semantics and Resource Management
- Data Structures & Algorithms
- Problem Solving
- Writing Clean and Maintainable C++

---

## Latest Learning Log

### 30 August 2026

Revisited C++ copy semantics and resource management with focused practice.

#### Copy Semantics Review

- Reviewed copy constructor vs copy assignment
- Identified when each is invoked
- Reviewed shallow vs deep copy
- Understood why pointer members can cause shared-memory problems
- Reviewed the role of destructors in resource cleanup
- Reviewed self-assignment

#### Implementation

- Built a `Student` class using dynamically allocated memory
- Implemented a custom copy constructor for deep copying
- Implemented a custom copy-assignment operator
- Used `const Student&` for copying
- Used `this` and `*this`
- Added self-assignment protection using `this == &other`
- Added a destructor to release dynamically allocated memory

#### Testing

- Tested copy construction
- Tested copy assignment
- Modified copied objects to verify independent memory
- Tested self-assignment
- Compiled and ran the program successfully

The main goal was to rebuild understanding of copy semantics rather than simply repeat yesterday's implementation.

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

- Operator Overloading
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

⭐ Consistency over intensity. Deep understanding matters more than the number of topics completed.