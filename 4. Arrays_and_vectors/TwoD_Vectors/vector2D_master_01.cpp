#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> row1{10,20,30};
    vector<int> row2{40,50,60};
    vector<vector<int>> matrix{};
    matrix.push_back(row1);
    matrix.push_back(row2);
    cout<<"First element: "<<matrix[0][0]<<endl;
    cout<<"Last element: "<<matrix[1][2]<<endl;
    cout<<"Middle element: "<<matrix[1][1]<<endl;
    matrix[0][1]=200;
    matrix[1][2]=600;
    cout<<"Updated matrix: "<<endl;
    cout<<matrix[0][0]<<" ";
    cout<<matrix[0][1]<<" ";
    cout<<matrix[0][2]<<endl;
    cout<<matrix[1][0]<<" ";
    cout<<matrix[1][1]<<" ";
    cout<<matrix[1][2]<<endl;
    return 0;
// Why is matrix[2][1] invalid? because valid index for rows is 0 1 and for coloumns is 0 1 2 
// so 2index in rows means 3 rows which doesnt exist
}