#include<iostream>
#include<queue>
using namespace std;
bool is_palindrome(string str)
{
    deque<char> dq;

    for(int i = 0;i<str.size();i++)
    {
        char c = str[i];
        dq.push_back(c); 
    }
    while (dq.size()>1)
    {
        char f = dq.front();
        dq.pop_front();

        char b = dq.back();
        dq.pop_back();

        if(f != b)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout<<boolalpha;
  cout<<is_palindrome("hello")<<"\n";
  cout<<is_palindrome("ABBA");
}