#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int result=factorial(n-1)*n;
    return result;

}
int main(){
    int n;
    cout<<"enter the positive integer: ";
    cin>>n;
    cout<<factorial(n)<<endl;
    
    return 0;
}