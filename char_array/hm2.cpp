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
    // string line , str;
    // cin >> line >> str;
    // int size = str.size();
    // bool is_suffix = true;
    // for(int i = 0;i<size;i++)
    // {
    //     if(line[i-size-1] == str[i-size-1])
    //     {
    //         is_suffix = false;
    //     }
    // }
    // if(is_suffix)
    // {
    //     cout << "YES!";
    // }
    // else{
    //     cout<<"NO!";
    // }

    /// p5;
    // string num;
    // cin >> num;
    // int conv = (int) num;
    // int res = (int)num * 3;

    // cout<<conv << " " << res <<"\n";

    /// p6;
    string line;
    cin>>line;
    int size = line.size();
    for(int i = 0; i<size;i++)
    {
        cout<<line[i];
        if(line[i] !=line[i+1])
        {
            cout<<" ";
        }
    }
}