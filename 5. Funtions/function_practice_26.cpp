#include<iostream>
using namespace std;//pass by reference starts
void addFive(int &num){
    num=num+5;
}
int main(){
    int number=20;
    addFive(number);
    cout<<number;
    return 0;
}