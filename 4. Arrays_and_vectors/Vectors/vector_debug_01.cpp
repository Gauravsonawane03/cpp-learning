#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums {10,20,30,40};

    nums[3] = 100;//invalid index only 0 1 2 3 is valid

    cout << nums[0] << endl;
    cout << nums[3] << endl;//same cant call the invalid index only valid index can be called

    return 0;
}