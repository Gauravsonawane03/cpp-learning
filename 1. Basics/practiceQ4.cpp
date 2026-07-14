#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"\nwelcome to the Ryan international high school :"<<endl;
    cout<<"enter the students name : "<<endl;
     string name;
    cin>>name;
    cout<<"enter the roll number: "<<endl;
    int rollnum;
    cin>>rollnum;
    cout<<"enter the marks obtain in maths:"<<endl;
    int maths;
    cin>>maths;
    cout<<"enter the marks obtained in physics:"<<endl;
    int physics;
    cin>>physics;
    cout<<"enter the marks obtained in chemistry: "<<endl;
    int chemistry;
    cin>>chemistry;
    int total{maths+physics+chemistry};
    double percentage{total/3.0};

    cout<<"\n===============REPORT CARD=================="<<endl;
    cout<<"Student : "<<name<<endl;
    cout<<"Roll No : "<<rollnum<<endl;
    cout<<"Maths : "<<maths<<endl;
    cout<<"Physics : "<<physics<<endl;
    cout<<"Chemistry : "<<chemistry<<endl;

    cout<<"\nTotal : "<<total<<endl;
    cout<<"Percentage : "<<percentage<<endl;
    cout<<"\n============================================="<<endl;
    cout<<endl;
    return 0;

}