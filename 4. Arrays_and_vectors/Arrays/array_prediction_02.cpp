#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    arr[1] = arr[4];
    arr[4] = arr[0];
    arr[0] = arr[3];
    arr[3] = arr[1];

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    return 0;
}