#include<iostream>
#include<vector>
#include<algorithm>	
using namespace std;


void test1()
{
    vector<int> v1 ;
    v1.push_back(30);
    v1.push_back(20);
    v1.push_back(10);
    for(auto val : v1)
    cout<<val<<" ";
}

void test2()
{
    vector<int> v = {1,3,4,-2,5,7,9,11};
    auto it = find(v.begin(),v.end(),-2);
    if(*it<0)
    {
        it = v.erase(it);
    }else{
        ++it;
    }
    for(auto val : v)
    cout<<val<<" ";
}

void test3()
{
    vector<int> v  {1,3,5,6,7,-2,4,5,6};
    auto it = find(v.begin(),v.end(),-2);

    if(it != v.end())
    {
        vector<int>v2 {10,20,30};
        v.insert(it,v2.begin(),v2.end());
    }
    for(auto &val : v)
    cout<<val<<" ";
}
int main()
{
    //test1()
    //test2();
    test3();
}