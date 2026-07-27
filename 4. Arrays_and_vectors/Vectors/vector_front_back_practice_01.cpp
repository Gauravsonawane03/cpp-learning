#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec{};
    vec.push_back(11);
     vec.push_back(22);
      vec.push_back(33);
       vec.push_back(44);
        vec.push_back(55);
        cout<<"First: "<<vec.front()<<endl;
        cout<<"Last: "<<vec.back()<<endl;
        cout<<"Total: "<<vec.size()<<endl;
        return 0;
        
}