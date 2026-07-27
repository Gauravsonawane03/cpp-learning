#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums {5,10,15,20};

    nums[0] = nums[2];
    nums[3] = nums[1];
    nums[1] = 100;

    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;

    return 0;
}