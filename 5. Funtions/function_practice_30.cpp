#include<iostream>
using namespace std;
void increaseIfEven(int &num){
    if(num%2==0){
        num+=10;
    }
}
    int main(){
        int number=7;
        increaseIfEven(number);
        cout<<number;
        return 0;
        
    }
