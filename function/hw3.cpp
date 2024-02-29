#include<iostream>
using namespace std;


void reverse_f(string &str)
{
    int sz  = str.size();
    for(int i =sz-1;i>=0;i--)
    {
        cout<<str[i];
    }
}
int main()
{
    string str ="olleh";
    reverse_f(str);
}