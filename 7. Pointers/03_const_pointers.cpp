#include<iostream>
using namespace std;
int main(){
    int age=23;
    int marks=95;
    //    1.pointer to constant.  //
    // cout<<"Pointer to Constant."<<endl;
    // const int *ptr=&age;
    // cout<<*ptr<<endl;
    // ptr=&marks;
    // cout<<*ptr<<endl;


    //       2.constant pointer.    //
    // cout<<"Constant Pointer"<<endl;
    // int *const ptr=&age;
    // cout<<*ptr<<endl;
    // //*ptr=50;
    // cout<<*ptr<<endl;


    //     3.constant pointer to const.   //
    cout<<"Constant Pointer to Constant"<<endl;
    const int *const ptr=&marks;
    cout<<*ptr<<endl;
return 0;
}