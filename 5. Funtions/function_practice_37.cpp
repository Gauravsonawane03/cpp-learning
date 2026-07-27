#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n<=1){
        return n;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
    int number;
    cout<<"enter an positive integer:";
    cin>>number;
    cout<<Fibonacci(number)<<endl;
    return 0;
}