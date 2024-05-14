#include<iostream>
#include<cmath>
using namespace std;


void insertionSort(int x[]) //// 9,2,4,5
{
    int key = 0 ;
    for(int i = 1; i<=x.size();i++) // i = 1 ,
    {
        key = x[i]; // key = 2
        for(int j = i-1;j>=0;j++) /// j = 0 , 
        {
            if(x[j]>key)
            {
                x[j+1] = x[j];
            }else{
                break;
            }
        }
        x[j+1] = key;
    }
    for(int i = 0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
}
int main()
{
    int x[] {1,8,2,5,6};
    insertionSort(x);
}