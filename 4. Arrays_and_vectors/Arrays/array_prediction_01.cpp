#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};

    arr[0] = arr[2];
    arr[2] = arr[4];
    arr[4] = arr[1];

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    return 0;
}