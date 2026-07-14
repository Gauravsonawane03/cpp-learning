#include<iostream>
#include<string>
using namespace std;
int main(){
        /* string user_name;take input of users name
           int user_age;take input of users age
            write a if condition that if age is greater than or equal to 18
            then print Hello,<user_name>!
            You are eligible to vote.
        */
        cout<<"\nEnter your name: ";
        string user_name;
        cin>>user_name;
        cout<<"Enter your Age: ";
        int user_age;
        cin>>user_age;
        if (user_age>=18){
            cout<<"Hello,"<<user_name<<"!"<<endl;
            cout<<"You are eligible to vote."<<endl;
        }
return 0;
}