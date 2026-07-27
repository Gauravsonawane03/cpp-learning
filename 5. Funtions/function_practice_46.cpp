#include<iostream>
using namespace std;
int findNum(int n){
    if (n % 10 == 7)
    return true;

return findNum(n / 10);
}
int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;
    cout<<findNum(number)<<endl;
    return 0;
}