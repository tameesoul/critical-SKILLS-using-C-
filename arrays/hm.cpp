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

    // int n ,  arr[200] {};
    // cin>>n;
    // for(int i = 0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // int max_1 =arr[0] , max_2 = arr[1];
    // for(int i = 2;i<n;i++)
    // {
    //     if(arr[i]>max_1)
    //     {
    //         max_2 = max_1 ;
    //         max_1 = arr[i];
    //     }else if (arr[i]>max_2)
    //     {
    //         max_2 = arr[i];
    //     }
        
    // }
   /// cout<<max_1 + max_2;


   //// same p3 but with the sum of the two values 
    // int n ,  arr[200] {};
    // cin>>n;
    // for(int i = 0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // int max_1 =arr[0] , max_2 = arr[1];
    // for(int i = 2;i<n;i++)
    // {
    //     if(arr[i]>max_1)
    //     {
    //         max_2 = max_1 ;
    //         max_1 = arr[i];
    //     }else if (arr[i]>max_2)
    //     {
    //         max_2 = arr[i];
    //     }
        
    // }
    // cout<<max_1 + max_2;

    /// p4

    int n ,arr[200] {};
    cin>>n; /// 5
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i]; /// 10 ,20,30,40,50;
    }
    int temp; /// dec
    for(int i = 0 ;i<n/2;++i) /// i =0;i < 5;
    {
        temp = arr[i]; // 
        arr[i] = arr[n-i-1]; 
        arr[n-i-1] = temp; 
        cout<<arr[i] <<" ";
    }
      for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}