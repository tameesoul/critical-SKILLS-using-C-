#include <iostream>
using namespace std;

int main() 
{
    /// p1
    // string line , str;
    // cin >> line >> str;
    // int size = str.size();
    // bool is_prefix = true;
    // for(int i = 0; i<size;i++)
    // {
    //     if(line[i]!=str[i])
    //     {
    //         is_prefix = false;
    //         break;
    //     }
    // }
    // if(is_prefix)
    // {
    //     cout<<"YES!";
    // }else{
    //     cout<<"NO!";
    // }


    // p2
    string line , str;
    cin >> line >> str;
    int size = str.size();
    bool is_suffix = true;
    for(int i = 0;i<size;i++)
    {
        if(line[i-size-1] == str[i-size-1])
        {
            is_suffix = false;
        }
    }
    if(is_suffix)
    {
        cout << "YES!";
    }
    else{
        cout<<"NO!";
    }
}