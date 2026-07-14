#include<iostream>
#include<string>
using namespace std;
int main(){
    /*inputs:1.enter customer name 2.enter price of item 1 3.enter price of item 2 4.enter price of item 3
    variables:1.string customer_name
    2.double price_item1,price_item2,price_item3;
    3.double total_price,total_price=price_item1+....
    4.double discout{10};
    5.double price_after_discount,price_after_discount=total_price*discout/100;
    6.double gst{18};
    7.double final_amount=price_after_discount*gst/100;
    */

    cout<<"/nwelcome to hollywood shopping centre: "<<endl;
    cout<<"enter customer name: "<<endl;
    string customer_name;
    cin>>customer_name;
    cout<<"enter price of item 1: "<<endl;
    double  price_item1;
    cin>>price_item1;
    cout<<"enter price of item 2: "<<endl;
    double price_item2;
    cin>>price_item2;
    cout<<"enter price of item 3: "<<endl;
    double price_item3;
    cin>>price_item3;
    double total_price;
    total_price=price_item1+price_item2+price_item3;
    double discout{10};
    double price_after_discount;
    price_after_discount=total_price-total_price*discout/100;
    double gst{18};
    double final_amount=price_after_discount*gst/100+price_after_discount;
    cout<<endl;
    cout<<"------------SHOPPING BILL------------"<<endl;
    cout<<"CUSTOMER NAME: "<<customer_name<<endl;
    cout<<"PRICE OF ITEM 1:₹"<<price_item1<<endl;
    cout<<"PRICE OF ITEM 2:₹"<<price_item2<<endl;
    cout<<"PRICE OF ITEM 3:₹"<<price_item3<<endl;
    cout<<"TOTAL PRICE:₹"<<total_price<<endl;
    cout<<"DISCOUNT: "<<discout<<"%"<<endl;
    cout<<"PRICE AFTER DISCOUNT: "<<price_after_discount<<endl;
    cout<<"GST: "<<gst<<"%"<<endl;
    cout<<"FINAL AMOUNT:₹"<<final_amount<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<endl;
    return 0;



}