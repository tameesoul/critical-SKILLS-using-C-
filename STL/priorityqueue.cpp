#include<iostream>
#include<queue>
using namespace std;


void print_pq(priority_queue<int>pq)
{
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    priority_queue<int>pq;
    pq.push(1);
    pq.push(6);
    pq.push(5);
    pq.push(2);
    pq.push(3); //// 6,5,3,2,1
    print_pq(pq);
}
