#include<iostream>
#include<queue>
using namespace std;

void print(priority_queue<int>&pq)
{
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    priority_queue<int> pq;

    pq.push(6);
    pq.push(10);
    pq.push(6);
    pq.push(4);
    pq.push(8);
    print(pq);
}
