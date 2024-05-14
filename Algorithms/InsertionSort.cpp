#include<iostream>
#include<cmath>
using namespace std;



void insertion_sort(int numbers[] , int n) 
{
    int key = 0;
    //// 8,3,5,2
    for(int i = 1; i<n;i++)    
    {
        key = numbers[i]; //// 2 
        int j = i-1;  /// 0 /// j = 1 
        while (j>=0 && numbers[j]>key) /// numbers[0] = 8 > 3
        {
            numbers[j+1] = numbers[j]; /// [3] = [8] 
            j--; /// j = -1  break;
        }
        numbers[j+1] = key; /// numbers[0] = 3
    }
    for(int i = 0;i<n;i++)
    {
        cout<<numbers[i]<<" ";
    }

}
int main()
{
    int n ,x[1000];
    cin >> n;
    for(int i = 0;i<n;i++)
    {
    cin >>x[i];
    }
    insertion_sort(x,n);
}