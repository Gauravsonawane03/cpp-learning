#include <iostream>
using namespace std;
class vehicle
{
public:
    void start()
    {
        cout << "Vehicle started" << endl;
    }
};
class Car : public vehicle
{
public:
    void drive()
    {
        cout << "Car is driving" << endl;
    }
};
class SportsCar : public Car
{
public:
    void turbo()
    {
        cout << "SportsCar turbo activated" << endl;
    }
};
class Bike : public vehicle
{
public:
    void ride()
    {
        cout << "Bike is riding" << endl;
    }
};
class Engine
{
public:
    void startEngine()
    {
        cout << "Engine Started" << endl;
    }
};
class GPS
{
public:
    void navigate()
    {
        cout << "Location" << endl;
    }
};
class SmartCar : public Engine, public GPS
{
public:
    void drive()
    {
        cout << "Smart car is driving" << endl;
    }
};
int main()
{
    SportsCar car1;
    car1.start();
    car1.drive();
    car1.turbo();
    Bike bike1;
    bike1.start();
    bike1.ride();
    SmartCar smartCar1;
    smartCar1.startEngine();
    smartCar1.drive();
    smartCar1.navigate();
    return 0;
}