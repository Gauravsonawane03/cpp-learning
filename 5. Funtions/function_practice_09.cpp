#include<iostream>
using namespace std;
// Return type:integer
// Function name:factorial
// Parameters:int number
// Returns:factorial result
int factorial(int number);
int main(){
    cout<<factorial(4);
    cout<<endl;
    cout<<factorial(5);
    cout<<endl;
    cout<<factorial(10);
}
int factorial(int number){
    int result=1;
    for(int i=number;i>=1;--i){
        result=result*i;
    }
    return result;
}
