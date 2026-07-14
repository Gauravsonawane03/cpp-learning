#include<iostream>
using namespace std;
int main(){
    int number{};
    cout<<"Enter the integer who want to count to:";
    cin>>number;
    for(int i{1};i<=number;++i){
        cout<<i<<endl;
    }
    cout<<"bashout!"<<endl;

}