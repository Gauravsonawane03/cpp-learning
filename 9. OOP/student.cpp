#include <iostream>
using namespace std;
class students
{
private:
    string name;
    int marks;

public:
    students(string student_name, int student_marks) : name(student_name), marks(student_marks)
    {
    }
    students(int student_marks) : marks(student_marks)
    {
    }
    int setMarks(int scored_marks)
    {
        if (scored_marks >= 0 && scored_marks <= 100)
        {
            marks = scored_marks;
        }
        return marks;
    }
    int getmarks()
    {

        return marks;
    }
};
int main()
{
    students student1("Gaurav", 50);
    students student2("Rahul", 60);
    student1.setMarks(50);
    student2.setMarks(80);
    cout << "Marks of student 1: " << student1.getmarks() << endl;
    cout << "Marks of student 2: " << student2.getmarks() << endl;
}