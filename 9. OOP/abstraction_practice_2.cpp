#include<iostream>
using namespace std;
class notification{
    public: virtual void notify() = 0;
     virtual ~notification() = default;
    
};
class EmailNotification : public notification{
    void notify() override{
        cout<<"Email recieved."<<endl;
    }
};
class SMSNotification : public notification{
    void notify() override{
        cout<<"SMS recieved."<<endl;
    }
};
int main(){
    notification *E=new EmailNotification();
    E->notify();
    delete E;
    notification *S= new SMSNotification();
    S->notify();
    delete S;
    return 0;
}