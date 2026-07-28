#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    sentence[0]=toupper(sentence[0]);
    cout<<"Original: "<<sentence<<endl;
    cout<<"length: "<<sentence.length()<<endl;
    string word;
    cout << "Enter word to search: ";
    cin >> word;
    if(sentence.find(word)==string::npos){
        cout<<"Not Found.";
    }else
    cout<<"found at index: "<<sentence.find(word)<<endl;
    
    int sub;
    cout<<"enter the index from you want substring:";
    cin>>sub;
    cout<<endl;
    cout<<sentence.substr(sub)<<endl;
    cout<<endl;
    cout<<sentence.erase(0,2)<<endl;
    cout<<endl;
    cout<<sentence.insert(0,"Awesome ")<<endl;
    cout<<endl;
    cout<<sentence.replace(sentence.find("Awesome"),8,"Super ")<<endl;
    cout<<endl;
return 0;
}