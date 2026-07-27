#include<iostream>
using namespace std;
void tripleelements(int arr[],int size){
    for(int i=0;i<size;++i){
        arr[i]=arr[i]*3;
    }
}
    int main(){
        int numbers[]{2,5,7,10};
        int size=4;
        tripleelements(numbers,size);
        for(int i=0;i<size;++i){
        cout<<numbers[i]<<" ";
        }
   
            
        
return 0;
    }
    
    