#include <iostream>
using namespace std;

int main()
{
    int marks[2][3] =
    {
        {10,20,30},
        {40,50,60}
    };

    marks[1][1] = 100;// Invalid row index (valid rows: 0 and 1)
    marks[1][2] = marks[0][2];// Invalid column index (valid columns: 0, 1, 2)

    cout << marks[0][0] << " ";
    cout << marks[0][1] << " ";
    cout << marks[0][2] << endl;

    cout << marks[1][0] << " ";
    cout << marks[1][1] << " ";
    cout << marks[1][2] << endl;

    return 0;
}