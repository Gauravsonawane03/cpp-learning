#include<iostream>
using namespace std;
void printDescending(int n){
    if(n==0){
        return ;
    }
    cout << n<<endl;
     printDescending(n - 1);
}
void printAscending(int n){
    if(n==0){
        return;
    }
    printAscending(n - 1);
    cout << n<<endl;
}
int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;
    printAscending(number);
     cout<<endl;
    printDescending(number);
 return 0;
}
