#include<iostream>
using namespace std;
int findLargest(int arr[], int size){
    int result=arr[0];
    for(int i=0;i<size;++i)
    {
        if(arr[i]>result){
result=arr[i];
} 
}return result;
}
int main(){
    int numbers[]{12, 45, 7, 89, 23};
    int size=5;
    findLargest(numbers,size);
    int largest = findLargest(numbers, size);

        cout << largest;
   
}