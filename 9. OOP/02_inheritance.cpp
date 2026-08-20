#include<iostream>
using namespace std;
class Vehicle{
    public: 
    void start(){
        cout<<"Vehicle started"<<endl;
    }
     void stop(){
        cout<<"Car is stopped"<<endl;
    }
    protected:
    int speed;
    
    private:
    void Enginecode(){
        cout<<"1234"<<endl;
    }
    
};
class Car:public Vehicle{
    public:
    void drive(){
        cout<<"Car is driving"<<endl;
    }
    void showDetails(){
        start();
        speed=50;
        cout<<speed<<endl;
    }
};

int main(){
    Car car1;
    car1.start();
    car1.drive();
    car1.stop();
    car1.showDetails();
return 0;
}