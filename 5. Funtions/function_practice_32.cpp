#include<iostream>
using namespace std;//recursion programs
void print(int n){
    if(n==1){
        cout<<n<<endl;
        return ;
    }cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter the number that prints n numbers:";
    cin>>n;
    print(n);
    return 0;

}