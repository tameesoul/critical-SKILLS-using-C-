#include<iostream>
using namespace std;

int main()
{
    ///p1
    // int n , numbers[200]={};
    // cin>>n;
    // for(int i =0;i<n;i++)
    // {
    //     cin>>numbers[i];
    // }
    // bool is_increase = true;
    // for(int i =1;i<n;i++)
    // {
    //     if(numbers[i]<numbers[i-1])
    //     {
    //         is_increase = false;
    //     }
    // }
    // if(is_increase)
    //     cout<<"YES!"<<"\n";\
    //     else
    //     {
    //         cout<<"NO!"<<"\n";
    //     }

    //p2
    // int n , numbers[2000]={};
    // cin>>n;
    // for(int i = 0;i<n;i++)
    // {
    //     cin>>numbers[i];
    // }
    // int max = numbers[0];
    // int min = numbers[0];
    // int temp = 0;
    // for(int i =0;i<n;i++)
    // {
    //     if(numbers[i]>max)
    //     {
    //         max = numbers[i];
    //     }
    //     if(numbers[i]<min)
    //     {
    //         min = numbers[i];
    //     }
    //     temp = min;
    //     min = max;
    //     max = temp;
    //     cout<<numbers[i];
    // }
    // cout<<"\n" <<"\n";
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<numbers[i]<<"\n";
    // }
    // cout<<max<<" "<< min ;

    ///p3

    // int n , number[500];
    // cin>>n;
    // for(int i = 0;i<n;i++)
    // {
    //  cin>>number[i];
    // }
   
    // cout<<number[0]<<" ";
    // for(int i = 1;i<n;i++)
    // {
    // if(number[i] != number[i-1])
    //     {
    //         cout<<number[i]<<" ";
    //     }
    // }

    //p4

    // int n , arr[200];
    // cin>>n;
    // for(int i = 0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // bool is_palindrome = true;
    // for(int i = 0;i<n/2;i++)
    // {
    //     if(arr[i] != arr[n-i-1])
    //     {
    //         is_palindrome = false;
    //     }
    // }
    // if(is_palindrome)
    // {
    //     cout<<"YES!";
    // }else{
    //     cout<<"NO!";
    // }

    int n , number[200];
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>number[i];
    }

    int smallest_pair = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(j<i&&number[i]+number[j]+(j-i) )
            {
                smallest_pair = number[i]+number[j]+(j-i);
            }
        }
    }

    cout<<smallest_pair<<"\n";
}