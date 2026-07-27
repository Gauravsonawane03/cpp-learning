#include<iostream>
using namespace std;
int add(int a, int b);
double add(double a, double b);
int main(){
    cout << add(5, 8) << endl;
    cout << add(5.5, 8.2);
}
int add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}