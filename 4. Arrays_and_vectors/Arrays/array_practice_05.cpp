#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"\nEnter the marks cored by student seperated in spaces:";
    cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    marks[2] = 100;
    marks[4] = marks[0];
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    return 0;
}