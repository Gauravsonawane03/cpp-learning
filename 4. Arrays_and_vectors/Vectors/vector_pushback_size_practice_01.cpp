#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec{};
    vec.push_back(15);
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"First element: "<<vec.at(0)<<endl;
    cout<<"last element: "<<vec.at(3)<<endl;
    cout<<"Total elements: "<<vec.size()<<endl;
    return 0;

}