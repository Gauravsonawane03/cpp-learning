#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    // int scores[]{10,20,30,40};
    // for(auto scores:scores)
    // cout<<scores<<endl; //int type



//     vector<double> temperatures{88.7,90.2,80.1,72.5};
//     double average_temp{};
//     double total{};

//     for(auto temp:temperatures)
//     total+=temp;
//     if (temperatures.size()!=0)
//     average_temp=total/temperatures.size();
// cout<<fixed<<setprecision(1)<<endl;
// cout<<"Average tempertaure is "<<average_temp<<endl;//vectore type and also io manipulation



// for(auto val:{1,2,3,4,5})
// cout<<val<<endl; //auto insert values

for(auto c:"this is a test")
if(c!=' ')
cout<<c;




    cout<<endl;
    return 0;
}