#include<iostream>
#include<string>
using namespace std;
int main(){
   cout<<"Enter the first number:";
   int first_number;
   cin>>first_number;
   cout<<"Enter the operator:";
   char operation{};
   cin>>operation;
   cout<<"Enter the second Number:";
   int second_number;
   cin>>second_number;
   switch(operation){
    case '+':
    cout<<"Result = "<<first_number+second_number<<endl;
    break;
    case '-':
    cout<<"Result = "<<first_number-second_number<<endl;
    break;
    case '*':
    cout<<"Result = "<<first_number*second_number<<endl;
    break;
    case '/':
    cout<<"Result = "<<first_number/second_number<<endl;
    break;
    default:cout<<"Invalid operator\n";


   }
}