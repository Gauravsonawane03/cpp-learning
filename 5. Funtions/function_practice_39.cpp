#include<iostream>
using namespace std;

    int countDigits(int n){
        if(n==0){
            return 0;
        }
        return 1+countDigits(n/10);
    }
    int main(){
        int digits;
        cout<<"Enter the digits:";
        cin>>digits;
        if(digits==0){
            cout<<1;
        }else 
        cout<<countDigits(digits)<<endl;
        // cout<<countDigits(digits)<<endl;
        return 0;
    }
