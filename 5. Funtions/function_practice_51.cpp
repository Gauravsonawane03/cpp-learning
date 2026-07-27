#include<iostream>
using namespace std;
int power(int base,int exponent){
    if(exponent==0){
        return 1;
    }
    return power(base,exponent-1)*base;
}
int main(){
    int number;
    int raise;
    cout<<"enter the numbers: ";
    cin>>number>>raise;
    cout<<power(number,raise)<<endl;
    return 0;
}