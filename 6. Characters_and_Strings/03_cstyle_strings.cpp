#include <iostream>
#include<cctype>
#include <cstring>
using namespace std;

int main() {
    char first[20];
    char second[20];
    cout<<"Enter first string: ";
    cin.getline(first, 20);
    cout<<"Enter second string:";
    cin.getline(second, 20);
    cout<<"Length of first string: "<<strlen(first)<<endl;
    cout<<"Length of second string: "<<strlen(second)<<endl;
    if(strcmp(first,second)==0){
        cout<<"they are equal."<<endl;
    }
     else {
     cout<<"they are different."<<endl;
     }
    char combined[50];
    cout<<strcpy(combined,first)<<endl;
    cout<<strcat(first,second)<<endl;
   return 0;
}