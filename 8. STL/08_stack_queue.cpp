#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    // stack
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout << s.top() << endl;
    cout<<s.size()<<endl;
    bool stack=s.empty();
    if(stack){
        cout<<"empty"<<endl;
    }else
    cout<<"not empty"<<endl;

    // queue
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    cout << q.front() << endl;
    cout<< q.back()<<endl;


    return 0;
}