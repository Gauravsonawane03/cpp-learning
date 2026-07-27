#include<iostream>
using namespace std;
int area(int side);
int area(int length, int breadth);
double area(double radius);
int main(){
    cout << area(5) << endl;
    cout << area(5,4) << endl;
    cout << area(2.5);
}
int area(int side){
    return side*side;
}
int area(int length, int breadth){
    return length*breadth;
}
double area(double radius){
    return 3.14 * radius * radius;
}