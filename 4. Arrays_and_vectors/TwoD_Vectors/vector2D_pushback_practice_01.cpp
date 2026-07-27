#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix{};
    vector<int> row1{1,2,3};
    vector<int> row2{4,5,6};
    matrix.push_back(row1);
    matrix.push_back(row2);
    cout<<matrix[0][0]<<endl;
    cout<<matrix[0][2]<<endl;
    cout<<matrix[1][0]<<endl;
    cout<<matrix[1][2]<<endl;
    return 0;
}