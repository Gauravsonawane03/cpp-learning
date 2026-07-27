#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers{10,20,30,40,50};
    numbers[2]=100;
    cout<<"First element: "<<numbers[0]<<endl;
    cout<<"Last element: "<<numbers[4]<<endl;
    cout<<"Modified third element: "<<numbers[2]<<endl;
    return 0;
}