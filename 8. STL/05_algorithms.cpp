#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {40, 10, 30, 20, 50, 30};
    sort(nums.begin(), nums.end()); // sorting algorithm
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
    auto it = find(nums.begin(), nums.end(), 30); // find algorithm

    if (it != nums.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    int occurance = count(nums.begin(), nums.end(), 30); // count algorithm
    cout << occurance << endl;
    auto maxIt = max_element(nums.begin(), nums.end()); // max min algorithms
    auto minIt = min_element(nums.begin(), nums.end());
    cout << "Largest element: " << *maxIt << endl;
    cout << "Smallest element: " << *minIt << endl;
    reverse(nums.begin(), nums.end()); // reverse algorithm
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    int a = 10;
    int b = 20;
    swap(a, b); // swap algorithm
    cout << "a = " << a << " " << "b = " << b << endl;
    sort(nums.begin(), nums.end());
    bool found = binary_search(nums.begin(), nums.end(), 30); // binary search algorithm
    if (found)
    {
        cout << "found" << endl;
    }
    else
        cout << "Not found" << endl;
    sort(nums.begin(), nums.end(), greater<int>()); // descending order sorting algorithm
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}