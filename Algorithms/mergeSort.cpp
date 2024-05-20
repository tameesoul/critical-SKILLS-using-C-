#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&items, int start, int mid, int end)
{
    int left_length = mid - start + 1;
    int right_length = end - mid;
    vector<int> left_array(left_length);
    vector<int> right_array(right_length);
    for (int i = 0; i < left_length; i++)
    {
        left_array[i] = items[start + i];
    }
    for (int j = 0; j < right_length; j++)
    {
        right_array[j] = items[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < left_length && j < right_length)
    {
        if (left_array[i] <= right_array[j])
        {
            items[k] = left_array[i];
            i++;
        }
        else
        {
            items[k] = right_array[j];
            j++;
        }
        k++;
    }
    while (i < left_length)
    {
        items[k] = left_array[i];
        i++;
        k++;
    }
    while (j < right_length)
    {
        items[k] = right_array[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &items, int start, int end)
{
    if (end <= start)
    {
        return;
    }
    int mid = (end + start) / 2;
    mergeSort(items, start, mid);
    mergeSort(items, mid + 1, end);
    merge(items, start, mid, end);
}

int main()
{
    int n;
    cin>>n;
    vector<int> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i];
    }
    int start = 0;
    int end = n - 1;
    mergeSort(items, start, end);

    for (int i = 0; i < n; i++)
    {
        cout << items[i] << " ";
    }

    return 0;
}