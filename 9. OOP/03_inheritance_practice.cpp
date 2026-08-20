#include<iostream>
using namespace std;
class vehicle{
    public:
    void start(){
        cout<<"Vehicle is started"<<endl;
    }
    protected:
    int speed;
};
class Car: public vehicle{
    public:
    void drive(){
        cout<<"Car is driving"<<endl;
    }
    void showspeed(){
        speed=100;
        cout<<"Car Speed: "<<speed<<endl;
    }
};
int main(){
    Car Car1;
    Car1.start();
    Car1.drive();
    Car1.showspeed();
    return 0;
}