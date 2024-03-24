#include<iostream>
#include<deque>
#include<queue>
using namespace std;



int main()
{

    int arr [] = {1,2,4,5,6,7,8,9,10};
    for(auto val :arr)
    cout<<val<<" ";

    deque<int>dq {1,2,5,6,3,5,6,7,3,7,8,2};
    for(auto dq :{1,2,5,6,3,5,6,7,3,7,8,2})
    {
        cout<< dq<<" ";
    }
}