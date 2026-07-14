#include<iostream>
using namespace std;
int main(){

    bool equal_result{false};
    bool notequal_result{false};
    cout<<boolalpha;
     int num1,num2;
    // cout<<"enter two integers: "<<endl;
    // cin>>num1>>num2;
    // equal_result=(num1==num2);
    // notequal_result=(num1!=num2);
    // cout<<"comparison results (equals): "<<equal_result<<endl;
    // cout<<"comaproison result (not equal): "<<notequal_result<<endl;
    

    // char char1{},char2{};
    // cout<<"enter two characters seperated by spaces: ";
    // cin>>char1>>char2;
    // equal_result=(char1==char2);
    // notequal_result=(char1!=char2);
    // cout<<"two characters are(equal): "<<equal_result<<endl;
    // cout<<"two characters are (not equal): "<<notequal_result<<endl;

 double double1{},double2{};
// cout<<"enter two doubles: "<<endl;
// cin>>double1>>double2;
// equal_result=(double1==double2);
// notequal_result=(double1!=double2);
// cout<<"two doubles are(equal): "<<equal_result<<endl;
// cout<<"two doubles are(not equal): "<<notequal_result<<endl;

cout<<"enter the integer and a double: "<<endl;
cin>>num1>>double1;
equal_result=(num1==double1);
notequal_result=(num1!=double1);
cout<<"comparisons are (equal): "<<equal_result<<endl;
cout<<"comparisons are (not equal): "<<notequal_result<<endl;







    return 0;
}