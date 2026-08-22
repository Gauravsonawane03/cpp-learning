#include <iostream>
using namespace std;
// Compile-time polymorphism
// Function overloading: the compiler selects the appropriate
// function based on the arguments provided.
class students
{
public:
    void marks(int maths, int science)
    {
        cout << "Maths score: " << maths << endl;
        cout << "Science score: " << science << endl;
    }
    void marks(double total)
    {
        cout << total / 2 << "%" << endl;
    }
};
int main()
{
    students s1;
    s1.marks(90, 80);
    s1.marks(170.0);
    return 0;
}

// Runtime polymorphism
// Function overriding + virtual functions:
// a base-class pointer/reference can refer to different
// derived objects, and the overridden function is selected
// at runtime based on the actual object.

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Makes sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "woof" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "meoww" << endl;
    }
};
int main()
{
    Animal *animal;
    Dog dog;
    animal = &dog;
    animal->sound();
    Cat cat;
    animal = &cat;
    animal->sound();
    return 0;
}