#include<iostream>
using namespace std;

int main()
{
    //// p1
    // const  int size = 5; //// 5
    // int arr[size];
    // for(int i = 0;i<size;i++)
    // {
    //     cin>>arr[i];
    // }
    // int min = arr[0];
    // for(int i = 0;i<size;i++)
    // {
    //     if(arr[i]<min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // cout<<min;

    //p2

    int n ,  arr[200] {};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_1 =arr[0] , max_2 = arr[1];
    for(int i = 2;i<n;i++)
    {
        if(arr[i]>max_1)
        {
            max_2 = max_1 ;
            max_1 = arr[i];
        }else if (arr[i]>max_2)
        {
            max_2 = arr[i];
        }
        
    }
    cout<<max_1<<" " << max_2;
}