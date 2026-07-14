#include<iostream>
#include<string>
using namespace std;
int main(){
    int number{};
    cout<<"enter an integer that countsdown:";
    cin>>number;
    while(number>0){
        cout<<number<<endl;
        --number;
    }
    cout<<"blastoff"<<endl;



    int num{};
    cout<<"enter a number that countsup:";
    cin>>num;
    int i{1};
    while(num>=i){
        cout<<i<<endl;
        i++;
    }
    cout<<"going up"<<endl;

    int number{};
    cout<<"enter an integer less than 100:";
    cin>>number;
    while(number>=100){
        cout<<"enter an interger less than 100:";
        cin>>number;
    }
        cout<<"thanks!"<<endl;

    bool done{false};
    int number{0};

    while(!done){
        cout<<"enter an integer between 1 and 5:";
        cin>>number;
        if(number <= 1||number>=5)
        cout<<"out of my range,try again"<<endl;
        else{
            cout<<"thanks"<<endl;
            done=true;
        }
    }














    cout<<endl;
    return 0;
}