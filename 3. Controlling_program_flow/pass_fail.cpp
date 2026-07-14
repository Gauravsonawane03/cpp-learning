#include<iostream>
using namespace std;
int main(){
    int student_marks;
    cout<<"\nEnter the marks scored by the student:";
    cin>>student_marks;

    if(student_marks>=40){
        cout<<"PASS."<<endl;
    }else{
        cout<<"FAIL."<<endl;
    }
    cout<<endl;
    return 0;
    
}