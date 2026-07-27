#include<iostream>
using namespace std;
double average(int arr[], int size){
    int result=0;
    for(int i=0;i<size;++i){
        result+=arr[i];
    }
    return result/size;
}
int main(){
    int numbers[]{10,20,30,40};
    int size=4;
    double sum_average=average(numbers,size);
    cout<<"Average = "<<sum_average<<endl;
}