#include<iostream>
using namespace std;
int findPower(int base,int exponent){
    if(exponent==0){
        return 1;
    }
    return findPower(base,exponent-1)*base;
}
int main(){
    int x;
    int y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<findPower(x,y)<<endl;
    return 0;
}