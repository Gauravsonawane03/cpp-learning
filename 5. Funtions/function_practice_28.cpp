#include<iostream>
using namespace std;
void addTen(int &a, int &b){
    a=a+10;
    b=b+10;
}
int main(){
    int x = 5;
    int y = 20;
    addTen(x,y);
    cout << x << " " << y;
    return 0;
}