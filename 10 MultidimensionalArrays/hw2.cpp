#include<iostream>
using namespace std;

int main()
{
    // int position[2][2] = {0};
    // int x , y;
    // cin >> x >> y;
    // for(int row = 0;row<2;++row)
    // {
    //     for(int col = 0;col <3;col++)
    //     {
    //         cin >> position[row][col];
    //     }
    // }
    // for(int i = 0;i<x;i++)
    // {
    //     cout <<"("<<i<<","<<position[i]<<")"<<" "; 
    //     for(int j = 0;j<y;j++)
    //     {
    //         cout <<"("<<j<<","<<position[j]<<")"<<" "; 
    //     }
    // }

    int row , col;
    cin >> row >> col;
    int MAX_NUM [200][200] = {0};
    for(int i = 0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            cin >>MAX_NUM[i][j];
        }
    }

    int MAX = MAX_NUM[0][0];

   for(int i = 1;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            if(MAX_NUM[i][j]>MAX)
            {
                MAX = MAX_NUM[i][j];
             cout <<"******************************************\n";
                cout<< i  << " "<< j <<"\n" ;
            }
        }

    }
    cout <<"******************************************\n";
    cout<<MAX<<"\n";
}