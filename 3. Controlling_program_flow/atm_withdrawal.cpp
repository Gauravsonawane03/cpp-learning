#include<iostream>
#include<string>
using namespace std;
int main(){
   /* take input as a pin(integer)
    then make a varibale integer which is constant 1234
    if the entered pin == correct pin then print how much money do you want to withdrawl
    then make a variable for withdrawl amount 
    if the withdrawl amount is less than or equal to 5000 then print transaction succesfull 
    else print insuffucient balance 
    at the end else print incorrect pin*/
    cout<<"\nEnter the PIN: ";
    int atm_pin;
    cin>>atm_pin;
    const int correct_pin{1234};
    if(atm_pin==correct_pin){
        cout<<"how much money you want to withdraw? ₹";
        int money_withdraw;
        cin>> money_withdraw;
        if(money_withdraw<=5000){
            cout<<"Transaction Succesfull."<<endl;
        }else{
        cout<<"Insufficient Balance."<<endl;

        }
    }  else 
    cout<<"Incorrect PIN."<<endl;
    }

