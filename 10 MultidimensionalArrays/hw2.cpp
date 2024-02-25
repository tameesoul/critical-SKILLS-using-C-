#include<iostream>
using namespace std;

int main()
{
    int position[2][2] = {0};
    int x , y;
    cin >> x >> y;
    for(int row = 0;row<2;++row)
    {
        for(int col = 0;col <3;col++)
        {
            cin >> position[row][col];
        }
    }
    for(int i = 0;i<x;i++)
    {
        cout <<"("<<i<<","<<position[i]<<")"<<" "; 
        for(int j = 0;j<y;j++)
        {
            cout <<"("<<j<<","<<position[j]<<")"<<" "; 
        }
    }
}