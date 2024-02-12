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
    int cnt=0;
    for(int i = 1; i<=200;i++)
    {
        for(int j = 1 ; j<=200;j++)
        {
            for(int k = 1;k<=200;k++)
            {
                for(int t = 1;t<=200;t++)
                {
                    if((k+t)==(i+k))
                    {
                        cnt++;
                    }
                }
            }
        }
    }

    cout<<cnt<<"\n";
}