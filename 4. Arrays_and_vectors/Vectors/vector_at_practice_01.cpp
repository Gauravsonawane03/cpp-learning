#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ages{18,20,22,24};
    ages.at(2)=30;
    cout<<"First age: "<<ages.at(0)<<endl;
    cout<<"Last age: "<<ages.at(3)<<endl;
    cout<<"Updated third age: "<<ages.at(2)<<endl;
    return 0;

}