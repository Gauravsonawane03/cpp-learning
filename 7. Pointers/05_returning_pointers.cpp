#include<iostream>
using namespace std;
int* createNumber(){
    int *number=new int;
    *number=100;
    return number;
}
int main(){

    int *result=createNumber();
    cout<<*result<<endl;
    delete result;
    result=nullptr;
    return 0;

}