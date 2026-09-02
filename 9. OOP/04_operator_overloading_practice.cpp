#include <iostream>
using namespace std;
class Student
{
public:
    int *marks;
    Student(int value)
    {
        marks = new int(value);
    }
    Student operator+(const Student &other)
    {
        Student result(*marks + *other.marks);
        return result;
    }
    Student& operator+=(const Student &other)
    {
         *marks += *other.marks;
        return *this;
    }
    ~Student()
    {
        delete marks;
    }
};
int main()
{
    Student s1(90);
    Student s2(80);
    // Student s3 = s1 + s2;
    // cout << *s3.marks << endl;
    // cout << *s1.marks << endl;
    // cout << *s2.marks << endl;
    s1 += s2;

    cout << *s1.marks << endl;
    cout << *s2.marks << endl;
    return 0;
}