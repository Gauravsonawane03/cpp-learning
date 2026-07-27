#include<iostream>
using namespace std;
void printRectangle(int rows = 3, int cols = 5);
int main(){
    printRectangle();
    cout<<endl;
    printRectangle(2,4);
}
void printRectangle(int rows ,int cols){
    for(int i=1;i<=rows;++i){
        for (int j=1;j<=cols;++j){
            cout<<"*";
        }
        cout<<endl;
    }
}
