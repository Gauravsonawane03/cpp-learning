#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"\nWELCOME TO THE INTERNET CAFE: "<<endl;
    cout<<"enter customer name: "<<endl;
    string customer_name;
    cin>>customer_name;
    cout<<"service used for how many hours?: "<<endl;
    double hours_used{0.0};
    cin>>hours_used;
    cout<<"charge per hour: "<<endl;
    double charge_per_hour{0.0};
    cin>>charge_per_hour;
    double total_charge{0.0};
    total_charge=hours_used*charge_per_hour;
    double service_charge{5};
    service_charge=total_charge*5/100;
    double subtotal{0.0};
    subtotal=total_charge+service_charge;
    double gst{18};
    gst=subtotal*gst/100;
    double final_bill;
    final_bill=subtotal+gst;

    cout<<"\n-------------------INTERNET CAFE BILL--------------------"<<endl;
    cout<<"Customer Name: "<<customer_name<<endl;
    cout<<"Hours Used: "<<hours_used<<endl;
    cout<<"Charge Per Hour:₹"<<charge_per_hour<<endl;
    cout<<"Total Charge:₹"<<total_charge<<endl;
    cout<<"Service Charge: "<<service_charge<<endl;
    cout<<"GST: "<<gst<<endl;
    cout<<"Final Bill: "<<final_bill<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<endl;
    return 0;



}