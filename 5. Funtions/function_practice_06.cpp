#include<iostream>
using namespace std;
int power(int base, int exponent = 2);
int main(){
    cout << power(2,4) << endl;
    cout << power(5) << endl;
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

