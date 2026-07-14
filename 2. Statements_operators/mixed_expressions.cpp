#include<iostream>
#include<string>
using namespace std;
int main(){

//static_cast<type>
// int total_amount{100};
// int total_number{8};
// double average {0.0};

// average = total_amount/total_number;
// cout<<average<<endl;


// average=static_cast<double> (total_amount)/total_number;
// cout<<average<<endl;

/*ask the user to enter 3 integers
calculate the sum of integers then
calculate the average of these integers then

dsiplay three integrs then
the sum and average of these integers
*/
int total{};
int num1{},num2{},num3{};
const int count{3};

cout<<"enter the three number seperated by spaces:";
cin>>num1>>num2>>num3;

total=num1+num2+num3; 
double average{0.0};
average=static_cast<double>(total)/count;

cout<<"display three numbers: "<<num1<<","<<num2<<","<<num3<<endl;
cout<<"sum of the three numbers: "<<total<<endl;
cout<<"average of three numbers: "<<average<<endl;










return 0;
}