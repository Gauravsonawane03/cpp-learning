#include<iostream>
using namespace std;
int countEven(int arr[], int size){
    int result=0;
    for(int i=0;i<size;++i){
        if(arr[i]%2==0){
            result++;
           
        }
    }return result;
}
int main(){
    int numbers[]{2,5,8,7,10,11};
    int size=6;
    int no_of_even_number=countEven(numbers,size);
    cout<<"total even numbers: "<<no_of_even_number<<endl;
}