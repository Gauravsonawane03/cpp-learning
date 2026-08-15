#include <iostream>
using namespace std;
template <typename T>//same data type template
T multiply(T a, T b)
{
    return a * b;
}
template <typename T, typename U>//mixed data type template 
T multiply(T a, U b)
{
    return a * b;
}
int main()
{
    int result = multiply(3, 4);
    cout << result << endl;
    double doubleresult = multiply(3.4, 5.6);
    cout << doubleresult << endl;
    double answer = multiply(2.5, 4);
    cout << answer<< endl;
    return 0;
}