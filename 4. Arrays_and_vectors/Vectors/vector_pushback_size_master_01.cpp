#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec{};
    vec.push_back(12);
     vec.push_back(24);
      vec.push_back(36);
       vec.push_back(48);
        vec.push_back(60);
        cout<<"First element: "<<vec.at(0)<<endl;
        cout<<"Last element: "<<vec.at(vec.size()-1)<<endl;
        cout<<"Middle element: "<<vec.at(2)<<endl;
        cout<<"Total elements: "<<(vec.size())<<endl;
        vec[0]=100;
        vec[vec.size()-1]=500;
        cout<<"Updated vectors: "<<endl;
        cout<<vec.at(0)<<endl;
         cout<<vec.at(1)<<endl;
          cout<<vec.at(2)<<endl;
           cout<<vec.at(3)<<endl;
            cout<<vec.at(4)<<endl;
            return 0;
//vec[5]is not allowed because nothing is stored at index 5 so the compiler gives an error or undefined output

}