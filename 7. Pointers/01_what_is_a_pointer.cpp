#include <iostream>
using namespace std;

int main() {

    int age = 23;
    int *ptr = &age;
    cout << "Value: " << age << endl;//actual value
    cout << "Address: " << &age << endl;//address of the variable
    cout << "Value stored in ptr : " << ptr << endl;//address of the variable stored in ptr variable
    cout << *ptr << endl;//value stored at the address stored in ptr // dereference


*ptr = 50;//modifying a value from the pointer

cout << age << endl;
cout << *ptr << endl;
    return 0;
}