#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {10, 20, 30};
    cout << nums.front() << endl;
    cout << nums.back() << endl;
    cout << nums.size() << endl;
    nums.push_back(40); // add element
    cout << nums.back() << endl;
    cout << nums.size() << endl;
    cout << nums.capacity() << endl;
    nums.push_back(50); // add element
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    nums.push_back(60); // add element
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    nums.push_back(70); // add element to check the capacity reallocation
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    nums.pop_back(); // remove element from end
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    nums.insert(nums.begin() + 2, 99); // insert element at index 2
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    nums.resize(4); // resize the vector
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    nums.reserve(20); // reserve new allocated memory
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
       *it = *it * 2;
    }
    for(auto it = nums.begin(); it != nums.end(); ++it){
        cout<<*it<<" ";
    }

    return 0;
}