#include<iostream>
using namespace std;
class Calculator{
    public:
    
     int operator()(int a,int b)
    {
       return a + b;
    }
};
int main()
{
    Calculator calc;

    cout << calc(5, 3) << endl;
    cout << calc(10, 7) << endl;

    return 0;
}