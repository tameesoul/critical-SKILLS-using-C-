#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // pair<int,string> p = make_pair(21,"ahmedtamer");
    // cout<<p.first<<p.second<<" "; 
    // stack<pair<int , string>>s;
    // s.push(p);
    // s.push(p);
    pair<int , pair<int,string>>pop1 = make_pair(10,make_pair(20,"ahmed"));
    cout<<pop1.second.second<<"";
}