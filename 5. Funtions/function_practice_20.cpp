#include<iostream>
using namespace std;
void makeNegative(int arr[], int size){
    for(int i=0;i<size;++i){
        if(arr[i]>0){
            arr[i]=-arr[i];
            
        }
}
}
    int main(){
        int number[]{5,-3,8,-1,10};
        int size=5;
        makeNegative(number,size);
        for(int i=0;i<size;++i){
            cout<<number[i]<<" ";
        }
        return 0;
    }

