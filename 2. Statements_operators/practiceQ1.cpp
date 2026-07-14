#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"\nWELCOME TO THE OBEROI'S CINEPLEX: "<<endl;
cout<<"Enter the name of the customer: "<<endl;
string customer_name;
cin>>customer_name;
cout<<"how many tickets do the customer wants?: "<<endl;
int no_of_tickets;
cin>>no_of_tickets;
cout<<"enter the price of one ticket: "<<endl;
double price_of_one_ticket;
cin>>price_of_one_ticket;
double total;
total=static_cast<double>(no_of_tickets)*price_of_one_ticket;

cout<<"\n----------- MOVIE TICKET -----------"<<endl;
cout<<"\nCustomer Name : "<<customer_name<<endl;
cout<<"Number of Tickets : "<<no_of_tickets<<endl;
cout<<"Price Per Ticket :₹"<<price_of_one_ticket<<endl;
cout<<"Total Bill :₹"<<total<<endl;
cout<<"\n------------------------------------"<<endl;
cout<<endl;













 return 0;   
}

