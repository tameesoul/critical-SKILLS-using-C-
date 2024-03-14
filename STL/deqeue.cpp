#include<iostream>
#include<queue>
using namespace std;


void print_back(deque<int> dq)
{
    while (!dq.empty())
    {
        cout<<dq.back()<<" ";
        dq.pop_back();
    }
    cout<<"\n";
}

void print_front(deque<int> dq)
{
    while (!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    
}
int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(49);
    dq.push_back(100);
  //  dq.push_front(4);
    dq.push_back(57);
    dq.push_back(47);
    dq.push_back(33);
    print_back(dq);
    print_front(dq);
}