#include<iostream>
using namespace std;
class Student {
public:
    int* marks;

    Student(int value) {
        marks = new int(value);
    }

    Student(const Student& other) {
    marks = new int(*other.marks);
    }
   Student& operator=(const Student& other) {
    if (this == &other) {
        return *this;
    }
    delete marks;
    marks = new int(*other.marks);
    return *this;
}
    ~Student() {
        delete marks;
    }

};
int main(){
// Student s1(90);
// Student s2 = s1;

// cout << *s1.marks << endl;
// cout << *s2.marks << endl;

// *s2.marks = 50;

// cout << *s1.marks << endl;
// cout << *s2.marks << endl;

// cout << (s1.marks == s2.marks) << endl;

// s1 = s1;

// cout << *s1.marks << endl;

Student s1(90);

// Copy construction
Student s2 = s1;

// Copy assignment
Student s3(50);
s3 = s1;

// Modify copies
*s2.marks = 80;
*s3.marks = 70;

cout << *s1.marks << endl;
cout << *s2.marks << endl;
cout << *s3.marks << endl;

// Self-assignment
s1 = s1;

cout << *s1.marks << endl;
return 0;

}