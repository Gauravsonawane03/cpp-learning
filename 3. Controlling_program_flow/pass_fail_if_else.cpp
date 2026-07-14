#include<iostream>
#include<string>
using namespace std;
int main(){
    /*take input as students name and marks 
    make a variable for marks and 
    write a if else condition that if marks are >=40 then Congratulations <name>!
                                                            You Passed.
                                                            or Better luck next time, <name>.
                                                            You Failed.
    */
   cout<<"\nEnter the student name: ";
   string students_name;
   cin>>students_name;
   cout<<"Enter the marks scored by the student: ";
   double marks_scored;
   cin>>marks_scored;
   if(marks_scored >= 40){
    cout<<"Congratulations,"<<students_name<<"!"<<endl;
    cout<<"You Passed."<<endl;
    cout<<endl;
   }else {
    cout<<"Better luck next time,"<<students_name<<"."<<endl;
    cout<<"You Failed."<<endl;
    cout<<endl;
   }
   return 0;
}