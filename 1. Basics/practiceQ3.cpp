#include <iostream>
#include <string>
using namespace std;

int main(){

    cout<<"\nWelcome to SBI"<<endl;
    cout<<"enter the name of the customer: "<<endl;
    string name;
    cin>>name;
    cout<<"enter the current balance in the account: "<<endl;
    double money;
    cin>>money;
    cout<<"enter amount to be deposited: "<<endl;
    double deposit;
    cin>>deposit;
    double new_balance{money+deposit};

    cout<<"\n----------BANK DETAILS-------------"<<endl;
    cout<<"Customer :$ "<<name<<endl;
    cout<<"current balance :$ "<<money<<endl;
    cout<<"deposit :$"<<deposit<<endl;
    cout<<"new balance :$"<<new_balance<<endl;
    cout<<"\n------------------------------------"<<endl;
    cout<<endl;
    return 0;


}
