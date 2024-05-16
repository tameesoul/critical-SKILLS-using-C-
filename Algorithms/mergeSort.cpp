#include <iostream>
using namespace std;


void merge(int array [] , int start , int midpoint , int end)
{
    int i , j , k;

    int left_length = midpoint -start+1;
    int right_length = end - midpoint;

    int left_array [left_length];
    int right_array [right_length];

   for(int i=0; i < left_length; i++){
        left_array[i] = array[start + i];
    }
    for(int j=0; j < right_length; j++){
        right_array[j] = array[midpoint + 1 + j];
    }

    i = 0 , j = 0;
    k = start;
    while(i<left_length && j <right_length)
    {
        if(left_array[i]<=right_array[j])
        {
            array[k] = left_array[i];
            i++;
        }else
        {
         array[k] = right_array[j];
         j++;
        }

        
        k++;
    }
    while (i<left_length)
    {
        array[k] = left_array[i];
        i++;
        k++;
    }
    while (j<right_length)
    {
        array[k] = right_array[j];
        j++;
        k++;
    }

    
}
void mergeSort(int array[] , int start, int end)
{
    if(start >= end){return;}
    
    int midpoint = (end + start)/2;
    mergeSort(array, start, midpoint);
    mergeSort(array, midpoint+1, end);
    merge(array, start, midpoint, end);
}

int main()
{
    int array [] = {8,5,2,4};
    mergeSort(array, 0, 3);
    for(int i = 0 ; i<4 ; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}