#include<iostream>
using namespace std;
void replaceEvenWithZero(int arr[], int size){
    for(int i=0;i<size;++i){
        if(arr[i]%2==0){
            arr[i]=0;
        }
}
}
    int main(){
        int number[]{4,7,10,5,8,1};
        int size=6;
        replaceEvenWithZero(number,size);
        for(int i=0;i<size;++i){
            cout<<number[i]<<" ";
        }
        return 0;
    }