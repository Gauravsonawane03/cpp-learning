#include<iostream>
using namespace std;
int main(){
    // int num{};
    // const int lower{10};
    // const int upper{20};
    // cout<<boolalpha;

    // cout<<"\nEnter the number - bound of: "<<lower<<" and "<<upper<<":";
    // cin>>num;
    // bool within_bounds(false);
    // within_bounds=(num>lower && num<upper);
    // cout<< num <<" is between "<<lower<<" and "<<upper<<":"<<within_bounds <<endl;

    // bool outside_bounds{false};
    // outside_bounds=(num<lower || num>upper);
    // cout<< num <<" is outside of "<<lower<<" and "<<upper<<":"<<outside_bounds <<endl;

    // bool on_bounds(false);
    // on_bounds=(num==lower || num==upper );
    // cout<< num <<" is on "<<lower<<" and "<<upper<<":"<<on_bounds <<endl;
cout<<boolalpha;
bool wear_coat{false};
double temperature{};
int wind_speed{};
const int wind_speed_for_coat{25};//over this wear
const int temp_for_coat{45};//lower than wear
cout<<"enter wind speed in mph: ";
cin>>wind_speed;
cout<<"enter temperature in(F): ";
cin>>temperature;
wear_coat=(temperature<temp_for_coat||wind_speed>wind_speed_for_coat);
cout<<"Do you need to wear a coat using OR ;"<<wear_coat<<endl;

wear_coat=(temperature<temp_for_coat && wind_speed>wind_speed_for_coat);
cout<<"do you need to wear a coat using AND : "<<wear_coat<<endl;

return 0;
}