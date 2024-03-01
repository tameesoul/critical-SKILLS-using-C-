#include<iostream>
using namespace std;
    bool palinderom(char arr[],int n)
    {
        bool is_palinderom =  true;
        for(int i =0;i<n/2;i++)
        {
            if(arr[i]!=arr[n-i-1])
            { 
                is_palinderom = false;
            }
        }
        return is_palinderom;
    }
int main()
{
    int n ;
    char arr[100];
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(palinderom(arr,n))
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}