#include<iostream>
using namespace std;


void is_power(int arr[] , int leng ,int n)
{
    int power = n;
    for(int i = 0;i<leng;i++)
    {
        if(n%2==0)
        {
            power+=arr[i+2]*n; 
        }
        power += arr[i+1]*n;
    }

    cout<<power<<" ";
}
int main()
{
    int arr[100] , leng , n;
    cin >>leng >> n;

    is_power(arr,leng,n);
}