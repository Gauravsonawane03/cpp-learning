#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {1,2,3},
        {4,5,6}
    };

    cout << matrix[0][1] << endl;

    matrix[1][2] = 100;

    cout << matrix[1][2] << endl;
    cout << matrix[0][2] << endl;
    cout << matrix[1][0] << endl;

    return 0;
}