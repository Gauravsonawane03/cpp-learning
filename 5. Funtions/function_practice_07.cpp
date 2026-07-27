#include<iostream>
using namespace std;
// Return type:integer
// Function name:larger
// Parameters:int a and int b
// Returns:larger number
int larger(int a, int b);
int main(){
    cout<<"Larger number is: "<<larger(5,60);
}
int larger(int a , int b){
    if(a > b){
        return a;
    }else
    return b;
}