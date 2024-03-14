#include<iostream>
#include<queue>
using namespace std;


int main()
{
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(5);
    q.push(12);
    q.push(1);
    //// using queue with string

    queue<string>q_string; 
    q_string.push("ahmedtamee");


    while (!q_string.empty())
    {
        cout<<q_string.front();
        q_string.pop();
    }
    
}