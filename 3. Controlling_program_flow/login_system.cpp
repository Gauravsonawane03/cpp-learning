#include<iostream>
#include<string>
using namespace std;
int main(){
    /*take input as username and password
    store user name as gaurav 
    first if the username is gaurav then ask for password
    store password as 1234 
    if the password is same then print successfull login
    else print incorrect password
    or else user not found if the username doesnt match
    */
   cout<<"\nEnter your username: ";
   string username;
   cin>>username;
   const string correct_username="gaurav";
   if(username==correct_username){
    cout<<"Enter your password: ";
    int user_password;
    cin>>user_password;
    const int correct_password{1234};
    if (user_password==correct_password){
        cout<<"Login Successful."<<endl;
    }else{
        cout<<"Incorrect Password."<<endl;
    }

   }else 
   cout<<"User not found."<<endl;

}
