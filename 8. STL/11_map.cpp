#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> students;
    students[1] = "A";
    students[2] = "B";
    students[1] = "C";
    cout << students[1] << endl;
    for (auto it = students.begin(); it != students.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    auto it = students.find(2);

    if (it != students.end())
    {
        cout << it->first << " " << it->second << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    students.erase(2);
    auto iT = students.find(2);

    if (iT != students.end())
    {
        cout << iT->first << " " << iT->second << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}