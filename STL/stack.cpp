#include<iostream>
#include<stack>
using namespace std;

void print(stack<string>st)
{
    while (!st.empty())
    {
        cout<<st.top();
        cout<<"\n";
        st.pop();
    }
    
}
int main()
{
    stack<string> st;

    st.push("ahemd");
    st.push("tamer");
    st.push("elsayed");

    print(st);
}