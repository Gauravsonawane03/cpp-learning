#include<iostream>
#include<cmath>
using namespace std;
 int countDigits(int n){
        if(n==0){
            return 0;
        }
        return 1+countDigits(n/10);
    }

int reverseCount(int n){
   if(n==0){
        return 0;
    }
    return n%10*pow(10,countDigits(n/10))+reverseCount(n/10);
}
int main(){
    int number;
    cout<<"enter the number:";
    cin>>number;
    if(number==0){
        return 0;
    }
    cout<<reverseCount(number)<<endl;
    return 0;
}