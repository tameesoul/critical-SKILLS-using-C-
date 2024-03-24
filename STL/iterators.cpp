#include<iostream>
#include<deque>
using namespace std;

void printfront(deque<int>&q)
{
    deque<int>::iterator it = q.begin();
    while (it != q.end())
    {
        cout<<*it<<" ";
        ++it;
    }
}

int main()
{
    deque<int>q {1,3,5,7,8,9,7}; // 6,1,5,12
    printfront(q);
    cout<<"\n";
    cout<<q.size()<<" ";
}