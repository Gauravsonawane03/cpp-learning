#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"\nWELCOME TO THE BAJAJ AUTO LIMITED: "<<endl;
cout<<"Enter the employee name: "<<endl;
string employee_name;
cin>>employee_name;
cout<<"enter salary per day: "<<endl;
double salary_per_day;
cin>>salary_per_day;
cout<<"number of days worked: "<<endl;
double no_of_days_worked;
cin>>no_of_days_worked;
double monthly_salary;
monthly_salary=salary_per_day*no_of_days_worked;

cout<<"\n----------- SALARY REPORT -----------"<<endl;
cout<<"\nEmployee Name : "<<employee_name<<endl;
cout<<"Salary Per Day :₹"<<salary_per_day<<endl;
cout<<"Days Worked : "<<no_of_days_worked<<endl;
cout<<"Monthly Salary :₹"<<monthly_salary<<endl;

cout<<"-------------------------------------"<<endl;
cout<<endl;


return 0;




}
