#include<iostream>
#include<string>
using namespace std;
int main(){
        cout<<"\nwelcome to jio: "<<endl;
        cout<<"enter the name of the customer: "<<endl;
        string customer_name;
        cin>>customer_name;
        cout<<"enter the recharge amount: "<<endl;
        int recharge_amount;
        cin>>recharge_amount;
        double cashback(recharge_amount>500);
        cashback=recharge_amount*10/100;
        double amount_after_cashback;
        amount_after_cashback=recharge_amount-cashback;
        double gst{18};
        gst=amount_after_cashback*gst/100;
        double final_amount_paid;
        final_amount_paid=amount_after_cashback+gst;
        cout<<endl;
        cout<<"---------------Mobile Recharge Bill------------"<<endl;
        cout<<"CUSTOMER NAME: "<<customer_name<<endl;
        cout<<"RECHARGE:₹"<<recharge_amount<<endl;
        cout<<"CASHBACK:₹"<<cashback<<endl;
        cout<<"AMOUNT AFTER CASHBACK:₹"<<amount_after_cashback<<endl;
        cout<<"GST:₹"<<gst<<endl;
        cout<<"FINAL AMOUNT PAID:₹"<<final_amount_paid<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        return 0;



}