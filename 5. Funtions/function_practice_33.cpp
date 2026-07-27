#include<iostream>
using namespace std;
void printNnumbers(int n){
if(n==1){
    cout<<n<<endl;
    return ;
}
printNnumbers(n-1);
cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter positive integer: ";
    cin>>n;
    printNnumbers(n);
    return 0;

}