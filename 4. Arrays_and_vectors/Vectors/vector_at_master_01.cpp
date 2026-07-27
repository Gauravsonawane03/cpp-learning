#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> data {2,4,6,8};
    data.at(3) = data.at(0);
    data.at(1) = 50;
    data.at(0) = data.at(2);
    cout<<data.at(0)<<endl;
    cout<<data.at(1)<<endl;
    cout<<data.at(2)<<endl;
    cout<<data.at(3)<<endl;
    return 0;
}