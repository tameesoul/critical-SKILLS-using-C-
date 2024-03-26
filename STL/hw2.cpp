#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int sum_vec (vector<int>&a)
{
    int sum = 0;
    for(auto x : a)
    {
        sum += x;
    }
    return sum;
}
int max_3stack_sum(vector<int>&a , vector<int>&b,vector<int>&c)
{
    int sa= sum_vec(a) , sb = sum_vec(b) , sc = sum_vec(c);
    while (!a.empty() && !b.empty() && !c.empty())
    {
        if(sa==sb && sb==sc)
            return sa;
        if(sa>sb&&sa>sb)
        {
            sa -= a.back() , a.pop_back();
        }else if (sb>sa&&sb>sc)
        {
            sb -=b.back() , b.pop_back();
        }else
        {
            sc -= c.back() , c.pop_back();
        }
    }
    return 0;
}

int main()
{
    vector<int> a {1,3,5,2,8,7};
    vector<int> b {12,4,5,1,5,3};
    vector<int> c {12,4,5,4,7};
    cout<<max_3stack_sum(a,b,c);

}
