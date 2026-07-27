#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec{};
    vec.push_back(50);
    vec.push_back(40);
    vec.push_back(30);
    vec.push_back(20);
    vec.push_back(10);
    cout<<"First element: "<<vec[0]<<endl;
    cout<<"Last element: "<<vec.at(vec.size()-1)<<endl;
    cout<<"Total elements: "<<vec.size()<<endl;
    vec[2]=300;
    cout<<"\nUpdated vector:"<<endl;
    cout<<vec.at(0)<<endl;
     cout<<vec.at(1)<<endl;
      cout<<vec.at(2)<<endl;
       cout<<vec.at(3)<<endl;
        cout<<vec.at(4)<<endl;
        return 0;



}