#include<iostream>
using namespace std;
int countZeros(int n){
    if(n==0){
        return 0;
    }
    return (n % 10 == 0) + countZeros(n / 10);
}
int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;
    cout<<countZeros(number)<<endl;
    return 0;
}









