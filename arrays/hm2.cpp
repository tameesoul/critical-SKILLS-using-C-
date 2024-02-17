#include<iostream>
using namespace std;

int main()
{
    int n , numbers[200]={};
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>numbers[i];
    }
    bool is_increase = true;
    for(int i =1;i<n;i++)
    {
        if(numbers[i]<numbers[i-1])
        {
            is_increase = false;
        }
    }
    if(is_increase)
        cout<<"YES!"<<"\n";\
        else
        {
            cout<<"NO"<<"\n";
        }
    

}