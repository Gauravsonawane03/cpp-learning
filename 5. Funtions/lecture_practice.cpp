#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

// libraries
// int main(){
//     double num{};
//     cout<<"Enter a number(double): ";
//     cin>>num;

//     cout<<"The sqrt of "<<num<<" is: "<<sqrt(num)<<endl;
//     cout<<"the cubed root of "<<num<<" is: "<<cbrt(num)<<endl;
//     cout<<"the sine of "<<num<<" is: "<<sin(num)<<endl;
//     cout<<"the cosine of "<<num<<" is: "<<cos(num)<<endl;
//     cout<<"the ciel of "<<num<<" is: "<<ceil(num)<<endl;
//     cout<<"the floor of "<<num<<" is: "<<floor(num)<<endl;
//     cout<<"the round of "<<num<<" is: "<<round(num)<<endl;

//     double power{};
//     cout<<"\nEnter a power to raise "<<num<<" to: ";
//     cin>>power;
//     cout<<num<<" raised to the "<<power<<" power is: "<<pow(num,power)<<endl;
// -----------------------------------------------------------------------------// 
//     int random_number{};
//     size_t count{10};
//     int min{1};
//     int max{6};
//     cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
//     srand(time(nullptr));

//     for(size_t i{1};i<=count;++i){
//         random_number=rand()%max+min;
//         cout<<random_number<<endl;
//     }
//     cout<<endl;
//     return 0;
//     //==================================================================//
// // function definition//
// const double pi{3.1415};
// double calc_area_circle(double radius){
// return pi*radius*radius;
// }

// double calc_volume_cylinder(double radius,double height){
//     return pi*radius*radius*height;
//     return calc_area_circle(radius)*height;
// }
//  void area_circle(){
//         double radius{};
//         cout<<"\nEnter the radius of the circle: ";
//         cin>>radius;
//         cout<<"area of the circle with radius: "<<radius <<" is "<<calc_area_circle(radius)<<endl;
//     }
//     void volume_cylinder(){
//         double radius{};
//         double height{};
//          cout<<"\nEnter the radius of the cylinder: ";
//          cin>>radius;
//          cout<<"\nEnter the height of the cylinder: ";
//          cin>>height;

//          cout<<"Volume of the cylinder with radius: "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;

//     }
// int main(){
//     area_circle();
//     volume_cylinder();
//     return 0;
   
// }
//-----------------------------------------------------------------------------------------------//
//function prototyping//

// double calc_area_circle(double radius);
// double calc_volume_cylinder(double radius,double height);
// void area_circle();
// void volume_cylinder();
// const double pi{3.1415};


// double calc_area_circle(double radius){
// return pi*radius*radius;
// }
// double calc_volume_cylinder(double radius,double height){
//     //return pi*radius*radius*height;
//     return calc_area_circle(radius)*height;
// }
//  void area_circle(){
//         double radius{};
//         cout<<"\nEnter the radius of the circle: ";
//         cin>>radius;
//         cout<<"area of the circle with radius: "<<radius <<" is "<<calc_area_circle(radius)<<endl;
//     }
//     void volume_cylinder(){
//         double radius{};
//         double height{};
//          cout<<"\nEnter the radius of the cylinder: ";
//          cin>>radius;
//          cout<<"\nEnter the height of the cylinder: ";
//          cin>>height;

//          cout<<"Volume of the cylinder with radius: "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;

//     }
// int main(){
//     area_circle();
//     volume_cylinder();
//     return 0;
   
//}
//---------------------------------------------------------------------------//
//fucntion parameters and return statements 

// void pass_by_value1(int num);
// void pass_by_value2(string s);
// void pass_by_value3(vector<string>v);
// void print_vector(vector<string>v);

// void pass_value_1(int num){
//     num=1000;
// }
// void pass_by_value2(string s){
//     s="changed";
// }
// void pass_by_value3(vector<string>v){
// v.clear();
// }

// void print_vector(vector<string>v){
//     for(auto s:v)
//     cout<<s<<" ";
//     cout<<endl;
// }
// int main(){
//     int num {10};
//     int another_num{20};
//     cout<<"num before calling pass by value 1: "<<num<<endl;
//     pass_by_value1(num);
//     cout<<"num after calling pass by value 1: "<<num<<endl;

//     cout<<"\nanother num before calling pass by value 1: "<<another_num<<endl;
//     pass_by_value1(another_num);
//     cout<<"another num after calling pass by value 1: "<<another_num<<endl;






