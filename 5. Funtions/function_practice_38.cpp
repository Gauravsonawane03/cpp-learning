#include<iostream>
using namespace std;
int sumOfdigits(int num){
    if(num==0){
        return 0;
    }
    return num%10+sumOfdigits(num/10);
}
int main(){
    int number;
    cout<<"enter an positive number: ";
    cin>>number;
    cout<<sumOfdigits(number)<<endl;
    return 0;
}