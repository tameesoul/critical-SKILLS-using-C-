#include<iostream>
#include<set>
using namespace std;

void print(set<string>str)
{    
    for(auto x : str)
    {
        cout<<x<<"\n";
    }
}


int main()
{
    set<string>str;
    str.insert("a");
    str.insert("ab");
    str.insert("abc");
    print(str);
    cout<<"\n";

    if(str.count("vv"));
    cout<<"YES";
}