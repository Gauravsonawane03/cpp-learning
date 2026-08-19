#include <iostream>
using namespace std;
class car
{
private:
    int speed;

public:
    car(int initialspeed) : speed(initialspeed) // intialization
    {
    }
    car() : speed(0)//default function
    {
    }
    ~car(){
        cout<<"Car Destroyed"<<endl;
    }
    int getSpeed() //public member function that accesses the private data member speed
    {
        return speed;
    }
    void accelerate()
    {
        speed += 10;
    }
};
int main()
{
    car car1(50);
    car1.accelerate();
    cout << car1.getSpeed() << endl;
    car car2;
    cout << car2.getSpeed() << endl;
    return 0;
}