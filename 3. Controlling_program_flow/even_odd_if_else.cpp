#include <iostream>
using namespace std;
int main(){
    /*take input as an integer
    put the condition that if the number is even then print The number is even.
                                                        else The number is odd.
    */
   cout<<"\nEnter the number: ";
   int number;
   cin>>number;
   if (number % 2 == 0){
    cout<<"The number is even."<<endl;
   }else{
    cout<<"The number is odd."<<endl;
   }
   cout<<endl;
   return 0;
}