#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"welcome to rama international hotel: "<<endl;
    cout<<"enter the customer name: "<<endl;
    string customer_name;
    cin>>customer_name;
    cout<<"enter number of nights stayed: "<<endl;
    int night_stayed{0};
    cin>>night_stayed;
    cout<<"enter room charges per night: "<<endl;
    double room_charges_per_night{0.0};
    cin>>room_charges_per_night;
    cout<<"enter food charges: "<<endl;
    double food_charges{0.0};
    cin>>food_charges;
    double room_cost{0.0};
    room_cost=night_stayed*room_charges_per_night+food_charges;
    double subtotal{0.0};
     double service_charge{5};
    subtotal=room_cost+room_cost*service_charge/100;
    double gst{18};
    double final_bill;
    final_bill=subtotal+subtotal*gst/100;
    cout<<"\n-----------HOTEL BILL----------------"<<endl;
    cout<<"CUSTOMER NAME: "<<customer_name<<endl;
    cout<<"NUMBER OF NIGHTS STAYED: "<<night_stayed<<endl;
    cout<<"ROOM CHARGES PER NIGHT:₹"<<room_charges_per_night<<endl;
    cout<<"FOOD CHARGES:₹"<<food_charges<<endl;
    cout<<"ROOM COST:₹"<<room_cost<<endl;
    cout<<"SERVICE CHARGE: "<<service_charge<<"%"<<endl;
    cout<<"SUBTOTAL:₹"<<subtotal<<endl;
    cout<<"GST: "<<gst<<"%"<<endl;
    cout<<"FINAL BILL:₹"<<final_bill<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<endl;


    

   
    
    
}