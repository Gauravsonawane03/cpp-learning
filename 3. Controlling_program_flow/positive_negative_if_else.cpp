#include<iostream>
#include<string>
using namespace std;
int main(){
    /*take input as an integer
    put the if else condition that if the number is greater than 0 then prints
                                                            The number is positive.
                                                            or else The number is negative or zero.
    */
   cout<<"\nEnter the number: ";
   int number;
   cin>>number;
   if (number > 0){
    cout<<" The number is positive."<<endl;
   } else {
    cout<<"The number is negative or zero."<<endl;
   }
   cout<<endl;
   return 0;

}