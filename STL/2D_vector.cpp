#include<iostream>
#include<vector>
#include<algorithm>	
using namespace std;

void t1()
{
    vector<string> v = {"ahmed","tamee","me"};
    for(auto val : v)
    cout<<v[0][0]<<" "; //a a a;

}

void t2()
{
    vector<int> col (5,1);  //////
    vector<vector<int>>row(3,col);
    row[1][0].push_back(5);
    for(auto val:row)
    {
        for(auto val2: col)
        cout<<val2<<" ";
        cout<<"\n";
    }
}
int main()
{
    //  t1();

    t2();
}