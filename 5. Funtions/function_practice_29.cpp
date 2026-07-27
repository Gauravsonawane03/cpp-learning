#include<iostream>
using namespace std;
void makePositive(int &num){
    if(num<0){
        num=-num;
    }
}
int main(){
    int number=-15;
    makePositive(number);
    cout<<number;
    return 0;
}