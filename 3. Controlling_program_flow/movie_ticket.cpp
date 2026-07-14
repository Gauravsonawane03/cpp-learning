#include<iostream>
#include<string>
using namespace std;
int main(){
    /*take age as input 
    if the age is 18 or above 
    then take input as do you have valid id or not?
    take a boolean id variable for yes or no
    if they have id tickets booked or else valid id required
    else not eligible
    */
   cout<<"\nEnter your Age: ";
   int entered_age;
   cin>>entered_age;
   const int required_age{18};
   if (entered_age >= required_age){
    cout<<"Do you have a valid ID?";
    bool valid_id{false};
    cin>>valid_id;
    const bool required_valid_id{true};
    if (valid_id ==required_valid_id){
        cout<<"Ticket Booked."<<endl;
    }else
    cout<<"Valid ID Required."<<endl;
   }
   else
   cout<<"Not Eligible"<<endl;

}