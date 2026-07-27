#include<iostream>
using namespace std;
int numbers[]{10,20,30,40,50};
void print_array(int arr[],int size){
    for(int i=0;i<size;++i){
        cout<<arr[i]<<endl;
    }
}
int main(){
    print_array(numbers,5);
}