#include<iostream>
using namespace std;
int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    numbers[0]=99;
    numbers[4]=numbers[1];
    cout<<numbers[0]<<endl;
    cout<<numbers[1]<<endl;
    cout<<numbers[2]<<endl;
    cout<<numbers[3]<<endl;
    cout<<numbers[4]<<endl;
    return 0;
}