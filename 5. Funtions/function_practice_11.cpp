#include<iostream>
using namespace std;
void printstars(int row = 5);
int main(){
    printstars(7);
    return 0;
    cout << "Program Started" << endl;

}
void printstars(int row){
    for(int i=1;i<=row;++i){
    for(int j=1;j<=row;++j){
        cout<<"*";
    }
    cout<<endl;
    }
    
}