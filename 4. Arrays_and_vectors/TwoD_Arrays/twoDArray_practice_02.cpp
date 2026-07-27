#include<iostream>
using namespace std;
int main(){
    int array[2][3]{
        {11,22,33},
        {44,55,66}
    };
    cout<<array[0][1]<<endl;
    cout<<array[1][0]<<endl;
    cout<<array[1][2]<<endl;
    return 0;
}