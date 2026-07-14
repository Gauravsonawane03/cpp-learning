#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    cout<<"enter the employee name:"<<endl;
    string employee_name;
    cin>>employee_name;
    cout<<"enter the employee age:"<<endl;
    int age;
    cin>>age;
    cout<<"enter the department of the employee:"<<endl;
    string department;
    cin>>department;
    cout<<"enter the salary of the employee:"<<endl;
    double salary;
    cin>>salary;

    cout<<"\n------ Employee Details ------"<<endl;
    cout<<"\nName        :"<< employee_name << endl;
    cout<<"Age         :"<< age << endl;
    cout<<"Department  :"<< department << endl;
    cout<<"Salary      :$"<< salary << endl;

    cout<<"\n-------------------------------------"<<endl;
    return  0;






}
