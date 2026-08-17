#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq; // max-heap
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    bool isEmpty = pq.empty();
    if (isEmpty)
    {
        cout << "Empty" << endl;
    }
    else
        cout << "Not empty" << endl;
    // for min-heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top() << endl;
    return 0;
}
