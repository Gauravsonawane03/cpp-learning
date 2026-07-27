#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{};

    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(15);

   // cout << nums.at(3) << endl;//invalid index only valid index is 0 1 2
    cout << nums.size() << endl;

   // nums[3] = 20;//same here invalid index 

    cout << nums.at(0) << endl;
    cout << nums.at(1) << endl;
    cout << nums.at(2) << endl;

    return 0;
}