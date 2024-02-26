#include<iostream>
using namespace std;

int main()
{
    int rows,cols;
    cin>>rows>>cols;
    int robot[100][100];
    for(int i  =0;i<rows;i++)
    {
        for(int j = 0; j<cols;j++)
        cin >> robot[i][j];
    }
    int i = 0 , j = 0 , sum = 0;
    while (i<rows && j < cols)
    {
        sum+=robot[i][j];
        int  next_val,best_i = -1 , best_j = -1; 
        if(j+1<cols)
        {
            next_val = robot[i][j+1] , best_i = i , best_j = j;
        }

        if(i+1 < rows)
        {
            next_val = robot[i+1][j]  , best_i = i , best_j = j;
        }

        if(i+1 < rows && j+1 <cols)
        {
            next_val = robot[i+1][j+1], best_i = i , best_j = j;
        }
    }
    
}