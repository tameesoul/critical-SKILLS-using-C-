#include<iostream>
#include<queue>
using namespace std;

int sum = 0;
queue<int>q;
struct last_k_n
{
    int k;
     last_k_n(int _k)
    {
        k = _k;
    }

    int next(int num)
    {
        q.push(num);
        sum += num;

        for((int)q.size()>k)
        {
            sum -=q.front();
            q.pop();
        };
        return sum;
    }
};

int main()
{

    last_k_n processor(4);
    int num;
    while (cin>>num)
    {
        cout<<processor.next(num);
    }
    
}