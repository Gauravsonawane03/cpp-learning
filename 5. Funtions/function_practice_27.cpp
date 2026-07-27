#include<iostream>
using namespace std;
void doubleNumber(int &num){
    num=num*2;
}
int main(){
    int number=15;
    doubleNumber(number);
    cout<<number;
    return 0;
}