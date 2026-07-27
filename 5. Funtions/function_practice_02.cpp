#include<iostream>
#include<string>
using namespace std;
void greet(string name);
int main(){
    greet("Gaurav");
    greet("Rahul");
    greet("Frank");
}
void greet(string name){
    cout<<"Hello,"<<name<<endl;
}