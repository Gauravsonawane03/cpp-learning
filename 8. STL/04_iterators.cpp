#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50};
    auto it = nums.begin();
    cout << *it << endl;
    cout << *(it+1) << endl;
    cout << *(it+2) << endl;
    cout<<*(it+3)<<endl;
    cout<<*(it+4)<<endl;
    ++it;
    if (it == nums.end()) //.end() is the position after the last element so we dont dereference it.
    {
        cout << "Iterator reached end" << endl;
    }

    return 0;
}