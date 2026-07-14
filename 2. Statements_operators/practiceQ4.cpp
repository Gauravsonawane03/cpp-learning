#include<iostream>
#include<string>
using namespace std;
int main(){
    /*pseudo:take input as
     1.take owner input name.
     2.take bike mileage in km per litre.
     3.take distance travelled in km.
     4.take petrol price per litre.
     variables
     1.int owner_name
     2.double mileage
     3.int distance
     4.double petrol_price
     5.double litres_used
     litres_used=distance/mileage
     double total_cost
     

     calculations
     litres petrol used=litres_used = distance / mileage
     total_cost = litres_used × petrol_price
    */


    cout<<"GAURAV PETROL PUMP: "<<endl;
    cout<<"enter vehicle owner name: "<<endl;
    string owner_name;
    cin>>owner_name;
    cout<<"enter bike mileage in km/litre: "<<endl;
    double mileage{0.0};
    cin>>mileage;
    cout<<"enter distance travelled in km: "<<endl;
    double distance{0.0};
    cin>>distance;
    cout<<"enter petrol price per litre: "<<endl;
    double petrol_price{0.0};
    cin>>petrol_price;
    double litres_used{0.0};
    litres_used=distance/mileage;
    double total_cost;
    total_cost=litres_used*petrol_price;

    cout<<endl;
    cout<<"\n----------- PETROL REPORT -----------"<<endl;
    cout<<"Owner Name :"<<owner_name<<endl;
    cout<<"Mileage (km/L) :"<<mileage<<endl;
    cout<<"Distance Travelled :"<<distance<<endl;
    cout<<"Petrol Price :"<<petrol_price<<endl;
    cout<<"Litres Used :"<<litres_used<<endl;
    cout<<"Total Petrol Cost :"<<total_cost<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<endl;
    return 0;

}