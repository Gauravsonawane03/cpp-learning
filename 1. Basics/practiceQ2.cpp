#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"\nGAURAV BURGER AND SOFT DRINKS"<<endl;
    cout<<"What is the name of the customer?: "<<endl;
    string name;
    cin>>name;
    cout<<"number of burgers taken by the customer: "<<endl;
    int burger_taken;
    cin>>burger_taken;
    const int price_burger{15};
    const double gst{0.18};

    cout<<"/nBILL FOR THE CUSTOMER:"<<endl;
    cout<<"Name of the customer: "<<name<<endl;
    cout<<"No of burgers ordered: "<<burger_taken<<endl;
    cout<<"price of one burger: $"<<price_burger<<endl;
    cout<<"subtotal of the order: $"<<price_burger*burger_taken<<endl;
    cout<<"GST on the subtotal is:$ "<<price_burger*burger_taken*gst<<endl;
    cout<<"======================================================"<<endl;
    cout<<"FINAL BILL TO BE PAID:$ "<<(price_burger*burger_taken)+(price_burger*burger_taken*gst)<<endl;
     cout<<endl;
     return 0;

    
}