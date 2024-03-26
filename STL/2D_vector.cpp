#include<iostream>
#include<vector>
#include<algorithm>	
using namespace std;

void t1()
{
    vector<string> v  {"ahmed","tamer","me"};
    // for(auto val:v)
    // {
    //     cout<<val<<" "
    // }
    // int sz = v.size();
    // for(auto i = 0;i<sz;i++)
    // {
    //     for(auto j = 0;j<sz;j++)
    //     cout<<v[i][j]<<" ";
    // }
    cout<<v[3][3];
}

void t2()
{
    vector<vector<int>> v {};
}
int main()
{
    t1();
}