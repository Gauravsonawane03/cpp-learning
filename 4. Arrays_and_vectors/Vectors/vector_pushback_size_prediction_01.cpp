#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{};

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << nums.size() << endl;

    nums[1] = 50;

    cout << nums.at(0) << endl;
    cout << nums.at(1) << endl;
    cout << nums.at(2) << endl;

    cout << nums.size() << endl;

    return 0;
}