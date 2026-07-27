#include<iostream>
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
int palindrome(int n){
    return reverseCount(n);
}
int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;
    int original=number;
   if(original==palindrome(number)){
    cout<<"it is a palindrome"<<endl;
   }else
   cout<<"it is not a palindrome"<<endl;
   return 0;
}