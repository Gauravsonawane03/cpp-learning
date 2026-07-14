#include<iostream>
using namespace std;
int main(){
    const int correct_password{1234};
    int password_entered{};
    do{
        cout<<"enter the password:";
        cin>>password_entered;
        if(password_entered != correct_password){
            cout<<"invalid password,try again."<<endl;
        }
    }while(correct_password!=password_entered);
        cout<<"Access Granted."<<endl;
        return 0;
  
}