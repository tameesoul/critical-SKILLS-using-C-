#include<iostream>
using namespace std;


void is_power(int arr[], int leng = 5 ,int n = 2)
{
    arr[0] = 1;
    for(int i = 1 ; i<leng;i++)
    {
        arr[i] = arr[i-1] * n;
    }
}
int main()
{
     int  arr[100]; 
     int leng , n;
    cin >>leng >> n;

    is_power(arr, leng,n);
    for(int i = 0;i<leng;i++)
    {
        cout<<arr[i]<<" ";
    }
}