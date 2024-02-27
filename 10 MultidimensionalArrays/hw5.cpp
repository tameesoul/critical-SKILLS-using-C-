#include <iostream>
using namespace std;

int main()
{
    int rows , cols;
    cin>> rows >> cols;
    int MAT_X[100][100];
    for(int i = 0 ;i<rows;i++)
    {
        for(int j = 0; j<cols;j++)
        {
            cin >> MAT_X[i][j];
        }
    }
    int query;
    cin >> query;
    for(int i = 0;i<query;i++)
    {
        int row1 , row2;
        cin >> row1 >> row2;
        for(int j = 0; j<rows;j++)
        {
            if(MAT_X[row1][j+1]<MAT_X[row2][j+1])
            {
                cout<<"YES"<<"\n";
                break;
            }
            else{
                cout<<"NO"<<"\n";
                break;
            }
        }
    }
}