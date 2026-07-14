#include<iostream>
#include<string>
using namespace std;
int main(){
    char selection{};
    do{
        cout<<"\n==============================="<<endl;
        cout<<"1.do this"<<endl;
        cout<<"2.do that"<<endl;
        cout<<"3.do something else"<<endl;
        cout<<"1.QUIT"<<endl;
        cout<<"\nenter your selection: ";
        cin>>selection;
        cout<<"==================================="<<endl;
        switch(selection){
            case '1':
            cout<<"You chose code 1, so you are doing this."<<endl;
            break;
            case '2':
            cout<<"You chose code 2, so you are doing that."<<endl;
            break;
            case '3':
            cout<<"You chose code 3, so you are doing something else."<<endl;
            break;
        }


    }while(selection!='q'&&selection!='Q');
    cout<<"Thanks!"<<endl;








}