#include<iostream>
using namespace std;
int productOfdigits(int n){
    if(n==0){
        return 1;
    }
    return n%10*productOfdigits(n/10);
}
int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;
    if(number==0){
        return 0;
    }
    cout<<productOfdigits(number)<<endl;
    return 0;
    
}