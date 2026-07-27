#include<iostream>
using namespace std;
int smaller(int a,int b);
int main(){
    cout<<smaller(5,8);

    
}
int smaller(int a,int b){
    if (a>b){
        return b;
    }return a;

}