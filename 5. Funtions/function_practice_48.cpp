#include<iostream>
using namespace std;
void mystery(int n)
{
    if(n==0)
        return;

    cout<<n<<" ";

    mystery(n-1);

    cout<<n<<" ";
}
int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;
    mystery(number);
 return 0;
}