#include<iostream>
using namespace std;

int main()
{

    int numbers[3][4] = 
    {
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    };
    for(int col = 0;col<4;col++)
    {
        cout<<"col"<<col<<":";
        for(int row = 0;row<3;row++)
        {
            cout<<numbers[row][col];
        }
        cout<<"\n";
    }
    
    // int grads[7][4];
    // for(int row =0; row<7;row++)
    // {
    //     for(int col = 0;col<4;col++)
    //     {
    //         cin>>grads[row][col]; 
    //     }
    // }
    // for(int row =0; row<7;row++)
    // {
    //     cout<<"row "<< row <<":";
    //     for(int col = 0;col<4;col++)
    //     {
    //        cout<<grads[row][col];
    //     }

    //     cout<<"\n";
    // }
}