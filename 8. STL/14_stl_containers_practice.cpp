#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <vector>
#include <unordered_set>
using namespace std;

// int main()
// {
//     pair<string, int> student = {"Gaurav", 85};
//     cout << student.first << " " << student.second << endl;
//     cout << endl;
//     map<string, int> marks;
//     marks["Gaurav"] = 90;
//     marks["Punit"] = 85;
//     marks["nikhil"] = 70;
//     for (auto student : marks)
//     {
//         cout << student.first << " " << student.second << endl;
//     }
//     cout << endl;

//     set<string> processed;

//     processed.insert("Gaurav");
//     processed.insert("Punit");
//     processed.insert("Nikhil");
//     for (auto name : processed) {
//     cout << name << endl;
// }
// }
int main()
{
    //     vector<int> nums;
    //     nums.push_back(10);
    //     nums.push_back(20);
    //     nums.push_back(30);
    //     for(auto it = nums.begin(); it != nums.end(); ++it){
    //         cout<<*it<<endl;
    //     }
    //    cout<<nums.size();

    // unordered_map<string, int> marks;
    // marks["GAURAV"] = 90;
    // marks["NIKHIL"] = 60;
    // marks["RAJ"] = 45;
    // for (auto it = marks.begin(); it != marks.end(); ++it)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // cout << marks["GAURAV"] << endl;
    // cout << marks.size() << endl;


    unordered_set<int> nums;
    nums.insert(30); 
    nums.insert(20);
    nums.insert(10);
    auto it = nums.find(20); 
    if (it != nums.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    cout<<nums.size();
    return 0;
}