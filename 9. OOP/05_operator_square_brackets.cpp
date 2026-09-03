#include <iostream>
using namespace std;
class Marks
{
private:
    int marks[5];

public:
    Marks(int m1, int m2, int m3, int m4, int m5)
    {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    int &operator[](int index)
    {
        return marks[index];
    }
};
int main()
{
    Marks studentMarks(70, 80, 75, 90, 85);

    cout << studentMarks[2] << endl;

    studentMarks[2] = 95;

    cout << studentMarks[2] << endl;

    Marks anotherStudent(60, 65, 70, 75, 80);
    
    cout<<anotherStudent[3]<<endl;

    anotherStudent[3]=88;

    cout<<anotherStudent[3]<<endl;
    return 0;
}