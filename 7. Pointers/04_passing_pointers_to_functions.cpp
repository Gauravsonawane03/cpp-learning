#include<iostream>
using namespace std;

//          practice 1.      //

// void changeValue(int *ptr){
//     *ptr=100;
// }
// void doubleValue( int *ptr){
//     *ptr*=2;
// }

// int main(){
//     int number=25;
//     changeValue(&number);
//     cout<<number<<endl;
//     doubleValue(&number);
//     cout<<number<<endl;
//     return 0;

// }

//.       practice 2.          //

// void swapValues(int *first,int *second){
//     int temp=*first;
//     *first=*second;
//     *second=temp;


// }
// int main(){
//     int a=10;
//     int b=20;
   
//      cout<<"Before swap: "<<a<<" "<<b<<endl;
//     swapValues(&a,&b);
//     cout<<"After swap: "<<a<<" "<<b<<endl;
// return 0;
// }

//.         Practice 3.          //

// void printArray(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
// {
//     cout << *(ptr+i) << endl;
// }
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int size=5;
//     printArray(arr,size);
//     return 0;
// }

//.         final practice.      //

void addTen(int *arr,int size){
    for(int i=0;i<size;i++){
        *(arr+i)=*(arr+i)+10;
        cout<<*(arr+i)<<endl;
    }
}
int main(){
    int numbers[5]={5,10,15,20,25};
    int size=5;
    addTen(numbers,size);
    return 0;
}