#include<iostream>
using namespace std;
int add(int a,int b);
int main(){
    int result = add(15,20);
    cout << result << endl;
}
int add(int a,int b){
    return a+b;
}