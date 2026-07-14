#include<iostream>
#include<string>
using namespace std;
int main(){
    int counter{10};
    int result{0};
   // ex.1 simple increment
    cout<< " counter: "<<counter<<endl;

    counter=counter+1;
    cout<< " counter: "<<counter<<endl;

    counter++;
    cout<< " counter: "<<counter<<endl;

    ++counter;
    cout<< " counter: "<<counter<<endl;

   // ex.2 preincrement
    counter=10;
    result=0;
    cout<<" counter: "<<counter<<endl;
    result=++counter;
    cout<<" counter: "<<counter<<endl;
    cout<<" result: "<<result<<endl;

    //ex.3 postincrement
    counter=10;
    result=0;
    cout<<"counter: "<<counter<<endl;

    result=counter++;
    cout<<"counter: "<<counter<<endl;
    cout<<"result: "<<result<<endl;

    //ex.4 
    counter=10;
    result=0;
    cout<<"counter: "<<counter<<endl;
    result=++counter + 10;//pre
    cout<<"counter: "<<counter<<endl;
    cout<<"result: "<<result<<endl;

    //ex.5

    counter=10;
    result=0;
    cout<<"counter: "<<counter<<endl;
    result=counter++ +10;//post
    cout<<"counter: "<<counter<<endl;
    cout<<"result: "<<result<<endl;














return 0;
}