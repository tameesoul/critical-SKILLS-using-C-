#include<iostream>
#include<cmath>
using namespace std;
void insertion_sort(int numbers[] , int n) 
{
    int key = 0;
    //// 8,3,5,2
    for(int i = 1; i<n;i++)     /// n 
    {
        key = numbers[i]; //1
        int j = i-1;  //1
        while (j>=0 && numbers[j]>key)  /// n 
        {
            numbers[j+1] = numbers[j]; ///1
            j--; ///1
        }
        numbers[j+1] = key;   ///1 
    }
    for(int i = 0;i<n;i++) /// n 
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