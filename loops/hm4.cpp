#include<iostream>
using namespace std;

int main()
{


    //// 
    // int cnt = 0;
    // for(int i = 50 ; i<=300;i++)
    // {
    //     for(int j = 70; j<=400;j++)
    //     {
    //         if(i<j && (i+j) % 7 == 0)
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<"\n";

    //p2 
   


     

     //p3
     int n ; /// 3
     cin>>n; /// 3
    for(int i = 2 ;i<=n;i++) // 4
    { 
        if(n % i == 0 && i!=n)
        {
         cout<<"NO"<<"\n";
        return 0;
        }  //  
      
    }
    cout<<"YES"<<"\n";
}