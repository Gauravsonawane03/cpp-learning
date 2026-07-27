#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>marks{78,85,91,67};
    marks[3]=100;
    cout<<"\nFirst mark: "<<marks[0]<<endl;
    cout<<"Second mark: "<<marks[1]<<endl;
    cout<<"Updated last mark: "<<marks[3]<<endl;
    cout<<"\nAll marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;
}