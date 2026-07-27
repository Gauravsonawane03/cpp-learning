#include<iostream>
using namespace std;
int sumofinteger(int n){
    if(n==0){
        return 0;
    }
    return sumofinteger(n-1)+n;
}
int main(){
    int number;
    cout<<"enter a positive integer:";
    cin>>number;
    cout<<sumofinteger(number)<<endl;
    return 0;
}