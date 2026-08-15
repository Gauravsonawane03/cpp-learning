#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> nums = {10, 20, 30, 40, 50};
    cout << nums[5] << endl; // give an undefined output if out of range
    cout << nums.size() << endl;
    cout << nums.front() << endl;
    cout << nums.back() << endl;
    if (nums.empty()) // checks in boolean value
    {
        cout << "Empty" << endl;
    }
    else
        cout << "not Empty" << endl;
    cout << nums.at(4) << endl; // give an exception and abort program
    return 0;
}