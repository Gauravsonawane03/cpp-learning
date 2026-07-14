#include<iostream>
using namespace std;
int main(){
int number;
cout<<"\nEnter the number who's multiplication you want:";
cin>>number;
    for(int i{1};i<=10;++i){
        cout<<number<<"*"<<i<<"="<<number*i<<endl;
    }
    
}