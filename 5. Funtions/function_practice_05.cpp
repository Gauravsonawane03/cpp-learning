#include<iostream>
using namespace std;
void introduce(string name="guest!");
int main(){
    introduce();
    introduce("Gaurav!");
}
void introduce(string name){
    cout<<"hello "<<name<<endl;
}