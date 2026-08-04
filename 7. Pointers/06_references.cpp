#include<iostream>
using namespace std;
//.          swap exercise with references.      //


// void swapValues(int &first,int &second){
//     int temp=first;
//     first=second;
//     second=temp;
// }
// int main(){
//     int a=10;
//     int b=20;
//     cout<<"Before: "<<a<<" "<<b<<endl;
//     swapValues(a,b);
//     cout<<"After:  "<<a<<" "<<b<<endl;
//     return 0;
// }

//               calculate                         //

//  void calculate(const int &first,int &second ,int &third){
//     second=first*2;
//     third=first*3;
//  }
//  int main(){
//     int number=10;
//     int doubled=0;
//     int triple=0;
//     calculate(number,doubled,triple);
//     cout<<"Number:  "<<number<<endl;
//     cout<<"Doubled: "<<doubled<<endl;
//     cout<<"Tripled: "<<triple<<endl;
//     return 0;

//  }


//               score update                  //

void updateScore(const string &Name, int &bonus,int &score){
    cout<<"Student Name: "<<Name<<endl;
    score+=bonus;
}
int main(){
    string student_name="Gaurav";
    int Bonus=8;
    int Score=72;
    updateScore(student_name,Bonus,Score);
    cout<<"Final score:  "<<Score<<endl;
    cout<<"Bonus:        "<<Bonus<<endl;
    return 0;
    

}


