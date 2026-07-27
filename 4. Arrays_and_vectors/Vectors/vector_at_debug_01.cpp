#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums {11,22,33};

    cout << nums.at(0) << endl;
  //  cout << nums.at(3) << endl;//inavlid index 3 only valid indexes are 0 1 2 
    cout<< nums.at(2) <<endl;
    return 0;
}