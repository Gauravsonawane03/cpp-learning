#include<iostream>
#include<string>
using namespace std;
int main(){
//ASSIGNMENT OPERATOR



//   int num1{200};
//   int num2{20};
//  num1=num2;

// cout<<"number 1 is: "<<num1<<endl;
 //cout<<"number 2 is: "<<num2<<endl;

    //arithmetic operator

int num1{200};
int num2{100};
//cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
int result{0};

result=num1+num2;
cout<<num1<<"+"<<num2<<"="<<result<<endl;

result=num1-num2;
cout<<num1<<"-"<<num2<<"="<<result<<endl;

result=num1*num2;
cout<<num1<<"*"<<num2<<"="<<result<<endl;

result=num1/num2;
cout<<num1<<"/"<<num2<<"="<<result<<endl;

result=num2/num1;
cout<<num2<<"/"<<num1<<"="<<result<<endl;

result=num1%num2;
cout<<num1<<"%"<<num2<<"="<<result<<endl;
//%is the remainer (modulo)
num1=10;
num2=3;
result=num1%num2;
cout<<num1<<"%"<<num2<<"="<<result<<endl;







    return 0;

}

