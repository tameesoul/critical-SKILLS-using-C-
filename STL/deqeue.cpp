#include<iostream>
#include<queue>
using namespace std;

void print_back(deque<int>&dq)
{
    while (!dq.empty())
    {
        cout<<dq.back()<<" ";
        dq.pop_back();
    }

    cout<<"\n";
}
void print_front(deque<int>dq)
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
    dq.push_front(1); // 1 
    dq.push_front(2);//  1,2
    dq.push_front(3); // 1,2,3
    dq.push_front(5); // 1,2,3,4
    dq.push_front(4); // 1,2,3,4,5
    print_back(dq);   /// 5,4,3,2,1
    print_front(dq); /// 1,2,3,4,5
    deque<int> copy = dq;
    cout<<"\n";

    cout<<copy.size();
    cout<<"\n";
    cout<<copy[4]; /// 5,4,3,2,1

}