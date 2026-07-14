#include<iostream>
#include<string>
using namespace std;
int main(){
    /*ask a user what grade they expect on a exam and 
    tell them what they need to score it.
    */
   char letter_grade{};
   cout<<"\nEnter what grades do you expect: ";
   cin>>letter_grade;

   switch(letter_grade){
    case 'a':
    case 'A':
    cout<<"You need 90 or above to score A,Study Hard!"<<endl;
    break;
    case 'b':
    case 'B':
    cout<<"you need to score 80-89 to score b,go study!"<<endl;
    break;
    case 'c':
    case 'C':
    cout<<"you need to score 70-79 to score c,but its average"<<endl;
    break;
    case'd':
    case'D':
    cout<<"you need to strive for more ,all you need is 60-69 for this"<<endl;
    break;
    case'f':
    case'F':
    {
        char confirm{};
        cout<<"are you sure(Y/N)?";
        cin>>confirm;
        if (confirm=='y'||confirm=='Y')
        cout<<"okay i guess you didnt study!"<<endl;
        else if(confirm=='n'||confirm=='N')
        cout<<"okay then go study!"<<endl;
        else
        cout<<"illegal choice."<<endl;
        break;
    }
    break;
    default:cout<<"sorry this is not valid grade!"<<endl;
    

   }

   cout<<endl;
   return 0;

//ALSO SWITCH WITH ENUMERATION;
enum direction{left,right,up,down};
direction heading{left};
switch (heading){
    case left:
    cout<<"going left!"<<endl;
    break;
    case right:
    cout<<"going right!"<<endl;
    break;
    case up:
    cout<<"going up!"<<endl;
    break;
    case down:
    cout<<"going down!"<<endl;
    break;
    default:cout<<"going nowhere"<<endl;

}
cout<<endl;
return 0;
}