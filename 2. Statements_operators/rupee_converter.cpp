#include <iostream>
#include <string>
using namespace std;
//pseudo for dollars to rupees
//1.write a constant for the conversion 
//2.take input of dollars and make the double variable for it
//3.make a variable for rupee also and write its conversion 
//4.just take output by writing this
 int main(){
const double dollar_to_rupee{95.29};
cout<<"\nWELCOME TO DOLLAR TO RUPEE CONVERTER:"<<endl;
cout<<"enter the value of dollars:$ "<<endl;
double dollars{0.0};
cin>>dollars;
double rupees{0.0};
rupees=dollars*dollar_to_rupee;
cout<< dollars <<"$ are equivalent to "<< rupees << "₹ " <<endl;
return 0;

 }