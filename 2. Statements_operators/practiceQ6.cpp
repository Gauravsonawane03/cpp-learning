#include<iostream>
#include<string>
using namespace std;
int main(){
//electricity bill
//(take inputs) 1.customer name 2.no of units consumed 3.cost per unit
//(variables) 1.string name 2.int no_of_units 3.double cost_per_unit 
//4.double electricity_bill 5.double gst 6.double final_amount
//(calculations)1.electricity_bill=no_of_units*cost_per_unit
//2.final_amount=electricity_bill+gst
cout<<"WELCOME TO THE MSEB INDIA: "<<endl;
cout<<"enter the customer name: "<<endl;
string customer_name;
cin>>customer_name;
cout<<"Enter the number of units consumed: "<<endl;
int no_of_units_consumed{0};
cin>>no_of_units_consumed;
cout<<"enter the cost per unit: "<<endl;
double cost_per_unit{0.0};
cin>>cost_per_unit;
double gst{18};
double electricity_bill;
electricity_bill=no_of_units_consumed*cost_per_unit;
gst=electricity_bill*gst/100;
double final_amount{0.0};
final_amount=electricity_bill+gst;
cout<<endl;
cout<<"\n----------- ELECTRICITY BILL -----------"<<endl;
cout<<"Customer Name : "<<customer_name<<endl;
cout<<"Units Consumed : "<<no_of_units_consumed<<endl;
cout<<"Cost Per Unit :₹"<<cost_per_unit<<endl;
cout<<"Electricity Bill :₹"<<electricity_bill<<endl;
cout<<"GST :₹"<<gst<<endl;
cout<<"Final Amount :₹"<<final_amount<<endl;
cout<<"----------------------------------------"<<endl;
cout<<endl;
return 0;







}