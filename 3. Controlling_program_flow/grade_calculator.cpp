#include<iostream>
using namespace std;
int main(){
    int student_marks{};
    cout<<"\nEnter the marks scored by the student: ";
    cin>>student_marks;
    if(student_marks>=0 && student_marks<=100){
        if(student_marks>=90){
            cout<<"Grade A."<<endl;
        }else if(student_marks>=80){
            cout<<"Grade B."<<endl;
        }else if(student_marks>=70){
            cout<<"Grade C."<<endl;
        }else if(student_marks>=40){
            cout<<"Grade D."<<endl;
        }else {
            cout<<"Grade F."<<endl;
        }
    }else
    cout<<"Invalid Marks."<<endl;
}