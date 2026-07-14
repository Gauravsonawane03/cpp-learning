#include<iostream>
#include<string>
using namespace std;
int main(){
   // int num{};
   // cout<<"enter an integer:";
   // cin>>num;
   /* if(num%2==0){
        cout<<"number is even.\n";
    }else{
        cout<<"number is odd.";
    }
    return 0;*/
   // cout<<num<<" is "<<((num%2==0)? "even ":"odd " )<<endl;
   int num1{},num2{};
   cout<<"Enter two numbers seperated by spaces: ";
   cin>>num1>>num2;
   if(num1!=num2){
   cout<<"the largest number is "<<((num1>num2)?num1:num2)<<endl;
   cout<<"the smallest number is "<<((num1<num2)?num1:num2)<<endl;
   }else{
   cout<<"the numbers are equal."<<endl;
   }
}
