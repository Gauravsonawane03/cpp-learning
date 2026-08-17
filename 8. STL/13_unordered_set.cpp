#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> nums;

    nums.insert(30);
    nums.insert(10);
    nums.insert(20);
    nums.insert(10);

    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << nums.count(20) << endl; // count
    cout << nums.count(50) << endl;

    auto it = nums.find(20); // find

    if (it != nums.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
     
    nums.erase(20); // erase 
     auto iT = nums.find(20); // find

    if (iT != nums.end())
    {
        cout << "Found: " << *iT << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }


    return 0;
}