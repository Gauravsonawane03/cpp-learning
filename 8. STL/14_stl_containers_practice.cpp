#include <iostream>
#include <map>
#include <set>
#include <utility>

using namespace std;

int main()
{
    pair<string, int> student = {"Gaurav", 85};
    cout << student.first << " " << student.second << endl;
    cout << endl;
    map<string, int> marks;
    marks["Gaurav"] = 90;
    marks["Punit"] = 85;
    marks["nikhil"] = 70;
    for (auto student : marks)
    {
        cout << student.first << " " << student.second << endl;
    }
    cout << endl;
    
    set<string> processed;

    processed.insert("Gaurav");
    processed.insert("Punit");
    processed.insert("Nikhil");
    for (auto name : processed) {
    cout << name << endl;
}
}