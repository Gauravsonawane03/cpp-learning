#include<iostream>
using namespace std;
int firstEven(int arr[], int size){
    
    for(int i=0;i<size;++i){
      if(arr[i]%2==0){
        return arr[i];
      }
    }
    return -1;
}
int main(){
    int number[]{7, 11, 9, 14, 20};
    int size=5;
    int even_number=firstEven(number,size);
   cout<<"First even number: "<<even_number<<endl;
   return 0;
}