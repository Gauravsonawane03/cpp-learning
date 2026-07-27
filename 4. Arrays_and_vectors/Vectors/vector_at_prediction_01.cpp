#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums {10,20,30,40};

    nums.at(1) = nums.at(3);
    nums.at(0) = 100;
    nums.at(2) = nums.at(0);

    cout << nums.at(0) << endl;
    cout << nums.at(1) << endl;
    cout << nums.at(2) << endl;
    cout << nums.at(3) << endl;

    return 0;
}