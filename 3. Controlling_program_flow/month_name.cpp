#include<iostream>
#include<string>
using namespace std;
int main(){
    /*take input as an integer to the month
    make cases pf integer to the month
    default should be invalid month
    */
   cout<<"Enter the number given to the Month:";
   int number_of_the_month;
   cin>>number_of_the_month;
   switch(number_of_the_month){
    case 1:
    cout<<"January.\n";
    break;
    case 2:
    cout<<"February.\n";
    break;
    case 3:
    cout<<"March.\n";
    break;
    case 4:
    cout<<"April.\n";
    break;
    case 5:
    cout<<"May.\n";
    break;
    case 6:
    cout<<"June.\n";
    break;
    case 7:
    cout<<"July.\n";
    break;
    case 8:
    cout<<"August.\n";
    break;
    case 9:
    cout<<"September.\n";
    break;
    case 10:
    cout<<"0ctober.\n";
    break;
    case 11:
    cout<<"November.\n";
    break;
    case 12:
    cout<<"December.\n";
    break;
    default:cout<<"Invalid Month.\n";

   }
}
