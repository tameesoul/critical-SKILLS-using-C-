#include<iostream>
#include<stack>
using namespace std;

void print(stack<string>st)
{
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
int main()
{
    stack<string> st;
    st.push("elsyed"); // 1
    st.push("tamer"); //2
    st.push("ahmed");///3 last in first out 
    print(st);
}