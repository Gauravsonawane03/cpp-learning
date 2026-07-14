#include<iostream>
#include<string>
using namespace std;
int main(){
    /* int number; take input as an integer
        write a if statement by modulo operator that if number is even then print The number is even.
        or nothing
    */
   cout<<"\nEnter the number: ";
   int number;
   cin>>number;
   if(number % 2 == 0 ){
    cout<<"The number is even."<<endl;
    cout<<endl;
   }
}