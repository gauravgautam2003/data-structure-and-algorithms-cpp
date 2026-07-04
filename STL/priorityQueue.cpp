#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

    priority_queue<int> q;//24,23,4,3,2
    priority_queue<int, vector<int>, greater<int>> pq;// 2,3,4,23,24

    q.push(23);
    q.push(24);
    q.push(3);
    q.push(4);
    q.push(2);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;

    pq.push(23);
    pq.push(24);
    pq.push(3);
    pq.push(4);
    pq.push(2);

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}