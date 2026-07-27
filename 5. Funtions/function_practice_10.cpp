#include<iostream>
using namespace std;
int cube(int number);
int power(int base, int exponent = 2);
int main(){
    cout << cube(3) << endl;
    cout << cube(5) << endl;
}
int power(int base, int exponent)
{
    int result = 1;

    for( int i = 1; i<=exponent; i++)
    {
        result = result * base;
    }

    return result;
}
int cube(int number){
return power(number)*number;
}


