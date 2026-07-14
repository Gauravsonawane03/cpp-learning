#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"\nwelcome to the cloud9 "<<endl;
    cout<<"enter the user name: "<<endl;
    string user_name;
    cin>>user_name;
    cout<<"enter calories burned on Monday: "<<endl;
    int calories_burned_monday{0};
    cin>>calories_burned_monday;
    cout<<"enter calories burned on tuesday: "<<endl;
    int calories_burned_tuesday{0};
    cin>>calories_burned_tuesday;
    cout<<"enter calories burned on wednesday: "<<endl;
    int calories_burned_wednesday{0};
    cin>>calories_burned_wednesday;
    int total_calories_burned{0};
    total_calories_burned=calories_burned_monday+calories_burned_tuesday+calories_burned_wednesday;
    double average_cal_per_day;
    average_cal_per_day=total_calories_burned/3.0;
    cout<<endl;
    cout<<"\n-------CALORIES MANAGEMENT REPORT----------"<<endl;
    cout<<"USER NAME: "<<user_name<<endl;
    cout<<"calories burned on Monday: "<<calories_burned_monday<<endl;
    cout<<"calories burned on tuesday: "<<calories_burned_tuesday<<endl;
    cout<<"calories burned on wednesday: "<<calories_burned_wednesday<<endl;
    cout<<"total calories burned: "<<total_calories_burned<<endl;
    cout<<"Average calories burned per day: "<<average_cal_per_day<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl;
    return 0;

}