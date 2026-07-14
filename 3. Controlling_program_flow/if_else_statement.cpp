#include<iostream>
#include<string>
using namespace std;
int main(){
    int num{};
    const int target{10};

    cout<<"Enter the target and ill compare it to: "<<target<<":";
    cin>>num;

    if (num>=target){
        cout<<"\n=========================================="<<endl;
        cout<<num<<" is greater than or equal to "<<target<<endl;
        int diff(num-target);
        cout<<num<<" is "<<diff<<" greater than the "<<target<<endl;
    }else {
    cout<<"\n==========================================="<<endl;
    cout<<num<<" is less than "<<target<<endl;
int diff(target-num);
cout<<num<< " is "<<diff<<" less than "<<target<<endl;
    }
}