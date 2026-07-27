#include<iostream>
using namespace std;
int main(){
    int marks[2][3]{};
    cout<<"\nEnter the marks of the students:";
    cin>>marks[0][0]>>marks[0][1]>>marks[0][2]>>marks[1][0]>>marks[1][1]>>marks[1][2];
    marks[0][2] = 100;
    marks[1][1] = marks[0][0];
    cout << marks[0][0] << " ";
    cout << marks[0][1] << " ";
    cout << marks[0][2] << endl;

    cout << marks[1][0] << " ";
    cout << marks[1][1] << " ";
    cout << marks[1][2] << endl;
    return 0;
}