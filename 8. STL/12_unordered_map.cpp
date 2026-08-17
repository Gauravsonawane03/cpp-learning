#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, string> students; // unordered but unique key pairs
    students[1] = "A";
    students[2] = "B";
    students[3] = "C";
    for (auto it = students.begin(); it != students.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    auto it = students.find(2); // finding elelemnt

    if (it != students.end())
    {
        cout << it->first << " " << it->second << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    students.erase(2); // erase the key
    auto iT = students.find(2);
    if (iT != students.end())
    {
        cout << iT->first << " " << iT->second;
    }
    else
    {
        cout << "Not found"<<endl;
    }
    vector<int> nums = {10, 20, 10, 30, 20, 10};
    unordered_map<int, int> freq; // frequency counting

   for (auto x : nums)
{
    freq[x]++;
}

for (auto it=freq.begin(); it != freq.end(); ++it)
{
    cout << it->first << " " << it->second << endl;
}

    return 0;
}
