#include<iostream>
using namespace std;

int main()
{
    const  int size = 5; //// 5
    int arr[size];
    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<min;
}