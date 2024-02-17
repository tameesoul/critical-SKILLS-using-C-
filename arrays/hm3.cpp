#include<iostream>
using namespace std;

int main()
{
    int n , number[200];
    cin>>n;
    while(n>0)
    {
        int i;
        cin>>number[i];
        n--;
    }
    for(int i = 1;i<n;i++)
    {
        for(int j = 0; j<n-i-1;j++)
        {
            if(number[i]<number[i-1])
            {
               int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++)
    {
        cout<<number[i]<<" "; 
    }
}