#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>scores{25,50,75,100};
    scores[2] = scores[0];
    scores[0] = 99;
    scores[3] = scores[1];
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    cout<<scores[3]<<endl;
    return 0;
}