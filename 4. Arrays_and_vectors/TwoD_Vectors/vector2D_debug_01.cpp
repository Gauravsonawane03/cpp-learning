#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {10,20,30},
        {40,50,60}
    };

    cout << matrix[0][1] << endl;
    cout << matrix[1][0] << endl;//invalid index only 0 1 is for rows

    matrix[1][2] = 100;//invalid index only 0 1 2 is for coloumns

    cout << matrix[1][2] << endl;

    return 0;
}