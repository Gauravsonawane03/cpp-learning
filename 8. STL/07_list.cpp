#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> nums = {10, 20, 30};
    nums.push_front(5);
    nums.push_back(40);
    nums.pop_front();
    nums.pop_back();
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    auto it = nums.begin();
    ++it;
    nums.insert(it, 15); // inserting element between 10 and 20
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    --it;
    nums.erase(it); // erase specific element
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}