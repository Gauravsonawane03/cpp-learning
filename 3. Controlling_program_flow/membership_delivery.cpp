#include <iostream>
#include<string>
using namespace std;
int main(){
    /*take input as is the customer a member?(yes=1 or 0=no)
    bool membership{false};
    if(membership)
    print "what is your purchase amount? ₹"
    if statement that is if purchase amount is 1000 or more then print free delivery
    or delivery charges applied.
    else 
    please join membership
    
    */
   cout<<"\nAre you member?(yes=1 or 0=no):";
   bool membership{false};
   cin>>membership;
   if(membership){
    cout<<"what is your purchase amount? ₹";
    int purchase_amount;
    cin>>purchase_amount;
    const int required_purchase_amount{1000};
    if(purchase_amount>=required_purchase_amount){
        cout<<"Free delivery."<<endl;
    }else{
        cout<<"delivery charges applied."<<endl;
    }
}else
cout<<"Please join membership."<<endl;
}