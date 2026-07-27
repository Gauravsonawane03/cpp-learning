#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> grades {'A','B','C','D'};
    grades.at(0)='S';
    grades.at(3)='F';
    cout<<"\nSecond grade:\n"<<grades.at(1)<<endl;
    cout<<"\nAll Grades:"<<endl;
    cout<<grades.at(0)<<endl;
    cout<<grades.at(1)<<endl;
    cout<<grades.at(2)<<endl;
    cout<<grades.at(3)<<endl;
    return 0;


}