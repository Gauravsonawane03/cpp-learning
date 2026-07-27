#include<iostream>
using namespace std;
// Return type:boolean 
// Function name:iseven
// Parameters:int number
// Returns:even or odor lets say 1 or 0
bool isEven(int number);
int main(){
    cout<<isEven(8);
    cout<<endl;
    cout<<isEven(7);
    
}
bool isEven(int number){
    if(number%2==0){
        return true;
    }return false;
}