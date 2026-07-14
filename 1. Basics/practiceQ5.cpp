#include <iostream>
#include <string>
using namespace std;
int main(){

cout<<"\nWELCOME TO UPNEXT MOBILE SHOPEE"<<endl;
cout<<"enter name of the customer: "<<endl;
string name;
cin>>name;
cout<<"enter mobile price: "<<endl;
double mobile_price;
cin>>mobile_price;
cout<<"discount to be given: "<<endl;
double discount;
cin>>discount;
cout<<"gst to be applied on the product: "<<endl;
double gst ;
cin>>gst;
double discount_amount{mobile_price*discount/100};
double price_after_discount{mobile_price-mobile_price*discount/100};
double gst_amount{price_after_discount*gst/100};
double final_price{price_after_discount+gst_amount};

cout<<"\n----------MOBILE SHOPEE BILL-------------"<<endl;
cout<<"Customer: "<<name<<endl;
cout<<"Mobile Price: "<<mobile_price<<endl;
cout<<"Discount: "<<discount<<"%"<<endl;
cout<<"GST :"<<gst<<"%"<<endl;

cout<<"==============================================="<<endl;
cout<<"Discount amount:"<<discount_amount<<endl;
cout<<"Price after discout: "<<price_after_discount<<endl;
cout<<"GST: "<<gst_amount<<endl;
cout<<"Final price: "<<final_price<<endl;
cout<<"\n================================================="<<endl;
cout<< endl;
return 0;






}