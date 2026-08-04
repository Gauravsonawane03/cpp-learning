#include<iostream>
using namespace std;
//                 PRACTICE 1              //

// void dynamic(){
   
//     int *ptr=new int;
//     *ptr = 100;

//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     delete ptr;
//     ptr=nullptr;
//   cout<<"Memory released."<<endl;
  
// }
// int main(){
//     dynamic();

//     return 0;

// }


//                PRACTICE 2           //

// void dynamic(){
//     int *a=new int;
//     int *b=new int;
//     *a=50;
//     *b=75;

//     cout<<"Address of a: "<<a<<endl;
//     cout<<"Value of a: "<<*a<<endl;
//     cout<<"\nAddress of b:"<<b<<endl;
//     cout<<"Value of b: "<<*b<<endl;
//     delete a;
//     delete b;
//     a=nullptr;
//     b=nullptr;
// }
// int main(){
//     dynamic();
//     return 0;
// }


// PRACTICE dynamic arrays //

// void arrayDemo()
// {
//     int *arr = new int[5];

//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;

//     cout << "Address stored in arr : " << arr << endl;
//     cout << "Value of arr[0]       : " << arr[0] << endl;
//     cout << "Value of arr[1]       : " << arr[1] << endl;
//     cout << "Value of arr[2]       : " << arr[2] << endl;
//     cout << "Value of arr[3]       : " << arr[3] << endl;
//     cout << "Value of arr[4]       : " << arr[4] << endl;

//     delete[] arr;
//     arr = nullptr;
// }
// int main(){
//     arrayDemo();
//     return 0;
// }

//    pointer arithmetic array        //
void pointerArithmeticDemo()
{
    int *arr = new int[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << "arr      : " << arr << endl;
    cout << "arr + 1  : " << arr + 1 << endl;
    cout << "arr + 2  : " << arr + 2 << endl;

    cout << endl;

    cout << "arr[0]     = " << arr[0] << endl;
    cout << "*(arr)     = " << *(arr) << endl;

    cout << "arr[1]     = " << arr[1] << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;

    cout << "arr[2]     = " << arr[2] << endl;
    cout << "*(arr + 2) = " << *(arr + 2) << endl;

    delete[] arr;
    arr = nullptr;
}
int main(){
    pointerArithmeticDemo();
    return 0;
}