#include <iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>items , int n)
{
    int key = 0; 

    for(int i = 1;i<=n;i++)
    {
        key = items[i];

        int j = i-1;

        while (j>=0 && items[j]>key)
        {
            items[j+1] = items[j];
            j--;
        }
        items[j+1] = key;
    }

    for(int value : items)
    {
        cout<<value <<" ";
    }
}


int main()
{
    int n ;
    cin>>n;
    vector<int>items(n);
    for(int i =0;i<n;i++)
    {
        cin >> items[i];
    }
    insertion_sort(items , n);
}