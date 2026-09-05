#include <iostream>
using namespace std;
class Student
{
private:
    int marks[3];
    string name;

public:
    Student(string studentName, int m1, int m2, int m3)
    {
        name = studentName;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    Student operator+(const Student &other)
    {
        Student result(
            name,
            marks[0] + other.marks[0],
            marks[1] + other.marks[1],
            marks[2] + other.marks[2]);

        return result;
    }
    Student &operator+=(const Student &other)
    {
        marks[0] += other.marks[0];
        marks[1] += other.marks[1];
        marks[2] += other.marks[2];

        return *this;
    }
    int &operator[](int index)
    {
        return marks[index];
    }
    int &operator()(int index)
    {
        return marks[index];
    }
};
int main()
{
    Student s1("Gaurav", 70, 80, 90);
    Student s2("Rahul", 60, 75, 85);
    Student s3 = s1 + s2;

    s1 += s2;

    cout << s1[0] << endl;
    cout << s1[1] << endl;

    cout << s3[0] << endl;
    cout << s1(2) << endl;

    return 0;
}