#include<iostream>
using namespace std;
int main(){

    int num1{},num2{};
    cout<<boolalpha;
    // cout<<"enter two numbers for comparisons: ";
    // cin>>num1>>num2;

    // cout<<num1<<">"<<num2<<":"<<(num1>num2)<<endl;
    // cout<<num1<<"<"<<num2<<":"<<(num1<num2)<<endl;
    // cout<<num1<<">="<<num2<<":"<<(num1>=num2)<<endl;
    // cout<<num1<<"<="<<num2<<":"<<(num1<=num2)<<endl;

    const int lower{10};
    const int upper{20};

    cout<<"\nenter the integer that is greater than: "<<lower<<" : ";
    cin>>num1;
    cout<<num1<<">"<<lower<<" is "<<(num1>lower)<<endl;

    cout<<"\nenter the integer that is lower than: "<<upper<<":";
    cin>>num2;
    cout<<num2<<"<"<<upper<<" is "<<(num2<upper)<<endl;











return 0;
}