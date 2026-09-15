#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    cout<<nums[1]<<endl;
    int size=nums.size();
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
cout<<endl;
    cout<<size<<endl;
cout<<endl;//pair
    pair<int,string> Id ={101,"Gaurav"};
    cout<<Id.first<<endl;
    cout<<Id.second<<endl;
cout<<endl;//map
    map<int,int> marks;
    marks[105]=90;
    marks[101]=85;
    marks[108]=75;
    cout<<marks[101]<<endl;
    for(auto it=marks.begin();it!=marks.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
cout<<endl;//unordered map
    unordered_map<int, int> studentMarks;
    studentMarks[110]=99;
    studentMarks[121]=88;
    studentMarks[132]=76;
    cout<<studentMarks[132]<<endl;
    for(auto it=studentMarks.begin();it!=studentMarks.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
cout<<endl;// set
    set<int> numbers;
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);
    numbers.insert(30);
    auto it = numbers.find(20); 
    if (it != numbers.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    cout<<numbers.size()<<endl;
    for(auto num : numbers){
        cout<<num<<endl;
    }
 cout<<endl;//unordered set
    unordered_set<int> number;
    number.insert(30);
    number.insert(10);
    number.insert(20);
    number.insert(10);
    number.insert(30);
    auto It = number.find(20); 
    if (It != number.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    cout<<number.size()<<endl;
     for(auto digits : number){
        cout<<digits<<endl;
    }
cout<<endl;// freq counting
    unordered_map<int,int> freq;
    vector<int> count={4, 2, 4, 3, 2, 4, 5};
    for(auto IT=count.begin();IT!=count.end();IT++){
        freq[*IT]++;
    }
    for(auto IT=freq.begin();IT!=freq.end();IT++){
        cout<<IT->first<<" "<<IT->second<<endl;
    }
cout<<endl; // unique elements sorted
    vector<int> Nums = {4, 2, 4, 3, 2, 4, 5};
    set<int> unique;
    for(auto It=Nums.begin();It!=Nums.end();It++){
        unique.insert(*It);
    }
    for(auto iT=unique.begin();iT!=unique.end();iT++){
        cout<<*iT<<endl;
    }
cout<<endl;//unordered set
    vector<int> NUMS = {4, 2, 4, 3, 2, 4, 5};
    unordered_set<int> elements;
    for(auto gt=NUMS.begin();gt!=NUMS.end();gt++){
        elements.insert(*gt);
    }
    for(auto Gt=elements.begin();Gt!=elements.end();Gt++){
        cout<<*Gt<<endl;
    }
     auto GT = elements.find(4); 
    if (GT != elements.end())
    {
        cout << "Found: " << *GT<< endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    cout<<elements.size()<<endl;
cout<<endl;//sort algo
    vector<int> num = {5, 2, 8, 1, 3};
    sort(num.begin(),num.end());
    for(auto tt=num.begin();tt!=num.end();tt++){
        cout<<*tt<<" ";
    }
cout<<endl;//reverse algo
    vector<int> Num = {1, 2, 3, 4, 5};
    reverse(Num.begin(),Num.end());
     for(auto Tt=Num.begin();Tt!=Num.end();Tt++){
        cout<<*Tt<<" ";
    }
   return 0; 
}
