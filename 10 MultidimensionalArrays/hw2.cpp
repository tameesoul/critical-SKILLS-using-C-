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


//// P1
//     int row , col;
//     cin >> row >> col;
//     int MAX_NUM [200][200] = {0};
//     for(int i = 0;i<row;i++)
//     {
//         for(int j =0;j<col;j++)
//         {
//             cin >>MAX_NUM[i][j];
//         }
//     }

//     int MAX = MAX_NUM[0][0];

//    for(int i = 1;i<row;i++)
//     {
//         for(int j =0;j<col;j++)
//         {
//             if(MAX_NUM[i][j]>MAX)
//             {
//                 MAX = MAX_NUM[i][j];
//              cout <<"******************************************\n";
//                 cout<< i  << " "<< j <<"\n" ;
//             }
//         }

//     }
//     cout <<"******************************************\n";
//     cout<<MAX<<"\n";

//// P2;

// int rows , cols ;
// cin >> rows >> cols;
// int MAT[100][100];
// for(int i = 0; i<rows;i++)
// {
//     for(int j = 0; j<cols;j++)
//     {
//         cin >> MAT[i][j];
//     }
// }
// int i = 0 , j = 0;
// int left_diaganol = 0;

// while (i<rows && j<cols)
// {
//     left_diaganol +=MAT[i++][j++];
// }
// int right_diagonal = 0;
// i = 0 , j = cols -1;
// while(i<rows && j<cols)
// {
//     right_diagonal += MAT[i++][j--];
// }

// int last_row = 0;
// j = 0;
// while (j<cols)
// {
//     last_row += MAT[rows-1][j++];
// }
// int last_col = 0;
// i = 0;
// while(i<rows)
// {
//     last_col +=MAT[i++][cols-1]; 
// }

// cout<<"left_diaganol = " << left_diaganol <<" "
// <<"right_diaganol = " << right_diagonal << " "
// <<"last_col ="  << last_col <<" "
// << "last_row = "<<last_row<<"\n";


// p3

int rows , cols;
cin >> rows >> cols;
int MAT[100][100];
for(int i = 0;i<rows;i++)
{
    for(int j = 0;j<cols;j++)
    {
        cin >> MAT[i][j];
    }
}
int c1 , c2;
cin >> c1 >> c2;
for(int i =0;i<rows; i++)
{
    int temp  = MAT[i][c1];
    MAT[i][c1] = MAT[i][c2];
    MAT[i][c2] = temp;
}

for(int i = 0;i<rows;i++)
{
    for(int j = 0;j<cols;j++)
    cout<<MAT[i][j];
}
}