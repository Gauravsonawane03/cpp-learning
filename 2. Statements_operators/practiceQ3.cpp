#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"\nBCCI CRICKET CLUB"<<endl;
    cout<<"ENTER THE NAME OF THE PLAYER: "<<endl;
    string player_name;
    cin>>player_name;
    cout<<"enter the runs scored in match-1: "<<endl;
    int match1_score{0};
    cin>>match1_score;
    cout<<"enter the runs scored in match-2: "<<endl;
    int match2_score{0};
    cin>>match2_score;
    cout<<"enter the runs scored in match-3: "<<endl;
    int match3_score;
    cin>>match3_score;
    int total{0};
    total=match1_score+match2_score+match3_score;
    double average;
    average=total/3.0;
    cout<<endl;


    cout<<"\n----------- PLAYER REPORT -----------"<<endl;
    cout<<"Player Name : "<<player_name<<endl;
    cout<<"Match 1 : "<<match1_score<<endl;
    cout<<"Match 2 : "<<match2_score<<endl;
    cout<<"Match 3 : "<<match3_score<<endl;
    cout<<"Total Runs : "<<total<<endl;
    cout<<"Average Runs : "<<average<<endl;
    cout<<"-------------------------------------"<<endl;



    return 0;


}