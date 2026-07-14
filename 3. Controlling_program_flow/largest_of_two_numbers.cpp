#include<iostream>
using namespace std;
int main(){
    /*take 2 numbers as input 
    if the first number is gretaer then print The largest number is <first number>.
    else The largest number is <second number>.
    */
   cout<<"\nEnter the first number: ";
   int first_number;
   cin>>first_number;
   cout<<"Enter the second number: ";
   int second_number;
   cin>>second_number;

   if(first_number > second_number){
    cout<<"The largest number is "<<first_number<<"."<<endl;
   }else if(second_number>first_number) {
    cout<<"The largest number is "<<second_number<<"."<<endl;
   }else{
    cout<<"both are equal."<<endl;
   }
   return 0;
}