#include<iostream>
using namespace std;
int square(int number);
int main(){
    int result = square(5);
    cout << result << endl;
}
int square(int number){
    return number*number;
}