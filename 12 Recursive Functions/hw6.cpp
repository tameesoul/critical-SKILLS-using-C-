#include<iostream>
using namespace std;

int arr_max(int arr[] , int leng)
{
    if(leng == 1)
    return arr[0];

    int sub_resut = arr_max(arr,leng-1);
    return arr_max(sub_resut,arr[leng-1]);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<arr_max(arr,5);
}