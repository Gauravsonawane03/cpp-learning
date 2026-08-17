#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> nums = {10, 20, 30};
    nums.push_front(5);//adding element from front
    nums.push_back(40);//simulataneously adding element from back
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    nums.pop_front();
    nums.pop_back();//removing element 
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
    //efficient because it has O(1) complexity to add/remove front/back elements
}