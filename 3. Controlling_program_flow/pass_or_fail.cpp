#include<iostream>
#include<string>
using namespace std;
int main(){
        /* string user_name; take input user name
           double marks; take input marks
           then put if condition marks>=40;
           print Congratulations <user_name>!
            You Passed.
            or nothing
        */
       cout<<"\nenter your name: "<<endl;
       string user_name;
       cin>>user_name;
       cout<<"enter your marks: "<<endl;
       double user_marks;
       cin>>user_marks;
       if (user_marks>=40){
        cout<<"Congratulations "<<user_name<<"!"<<endl;
        cout<<"You Passed."<<endl;
         
       }


}