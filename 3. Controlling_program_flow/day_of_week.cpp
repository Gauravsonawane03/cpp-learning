#include<iostream>
#include<string>
using namespace std;
int main(){
    /* take integer as an input 
    assign each integer from 1 to 7 as each day 
    default should be invalid day
    */
   cout<<"Enter the number of the day: ";
   int number_of_the_day{};
   cin>>number_of_the_day;
   switch(number_of_the_day){
    case 1:
    cout<<"Monday."<<endl;
    break;
    case 2:
    cout<<"Tuesday."<<endl;
    break;
    case 3:
    cout<<"Wednesday."<<endl;
    break;
    case 4:
    cout<<"Thursday."<<endl;
    break;
    case 5:
    cout<<"Friday."<<endl;
    break;
    case 6:
    cout<<"Saturday."<<endl;
    break;
    case 7:
    cout<<"Sunday."<<endl;
    break;
    default:cout<<"Invalid day."<<endl;
   }
}