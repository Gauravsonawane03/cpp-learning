#include<iostream>
using namespace std;
void double_elements(int arr[],int size){
    for(int i=0;i<size;++i){
        cout<<arr[i]*2<<" ";
    }
}
int main(){
    int numbers[]{2,4,6,8,10};
    int size=5;
    cout<<"Before: "<<endl;
    for(int i=0;i<size;++i){
        cout<<numbers[i]<<" ";
    }cout<<endl;
     cout<<"After: "<<endl;
    double_elements(numbers,size);
    //  cout<<"After: "<<endl;
    //  for(int i=0;i<size;++i){
    //     cout<<numbers[i]<<" ";
        
    //  }
     cout<<endl;



return 0;
}
