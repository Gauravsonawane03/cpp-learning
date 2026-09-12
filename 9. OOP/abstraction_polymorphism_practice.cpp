#include<iostream>
using namespace std;
class Payment{
        public:
        virtual double pay(double a)=0;
        virtual ~Payment() = default;
};
class upi : public Payment{
    public:
    double pay (double a) override{
        cout<<"₹"<<a<<" sent by UPI"<<endl;
        return a;
    }
};
class card : public Payment{
    public:
    double pay(double a) override{
        cout<<"₹"<<a<<" Sent by card"<<endl;
        return a;
    }
};
int main(){
    Payment *customer1= new upi();
    customer1->pay(500);
    delete customer1;

    Payment *customer2= new card();
    customer2->pay(1000);
    delete customer2;
}