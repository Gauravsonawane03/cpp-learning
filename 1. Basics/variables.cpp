#include <iostream>
#include <string>
using namespace std;
/*this program will calculate the area of room in square feet
int main(){
 int room_length{0};
    cout<<"enter the lenght of the room in feet: ";
    cin>>room_length;
   int room_width{0};
    cout<<"enter the width of the room in feet:";
    cin>>room_width;

    cout<<" the area of the room is " <<room_length*room_width<< " square feet"<<endl;
    return 0;
}*/
int main(){
    //add a employee name and age and default wage hourly is 590
     string name;
    cout<<"enter the name of the employee: ";
    cin>>name;
    int age{0};
    cout<<"enter the age of the employee: ";
    cin>>age;
    double wage{590};
    cout<<" the name is " <<name<< " and age is:" <<age<< " and wage is:"<<wage<<" per hour"<<endl;
    return 0;   
}