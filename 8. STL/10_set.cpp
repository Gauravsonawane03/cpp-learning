#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s; // 1.ascending order as well no duplicates

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    auto it = s.find(20); // find the element

    if (it != s.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    s.erase(20); // erase the element
    auto iT = s.find(20);

    if (iT != s.end())
    {
        cout << "Found: " << *iT << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    cout << s.count(20) << endl;
    cout << s.count(30) << endl;

    //multiset //ascending order but allows dupilcates
    multiset<int> ms;
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}