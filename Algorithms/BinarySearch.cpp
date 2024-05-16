#include<iostream>
using namespace std;


void binarySearch( int n,int array[] , int key )
{
    int low = 0; 
    int high = n-1;
    int mid = (low + high) / 2;

    while(low <= high) /// n 
    {
        if(key == array[mid])
        {
            cout<< "key found at "<<mid;
            return;
        }else if(key>mid)
        {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }  
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;
    binarySearch(n,array,key);
    return 0;
}