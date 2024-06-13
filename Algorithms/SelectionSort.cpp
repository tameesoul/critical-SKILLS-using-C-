#include <iostream>
#include <vector>
using namespace std;

int smallest_index(vector<int> arr)
{
    int n = arr.size();
    int smallest = arr[0];
    int smallest_index = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

vector<int> selection_sort(vector<int>& nums)
{
    int n = nums.size();
    vector<int> SortedArray(n);
    for(int i = 0; i < n; i++)
    {
        int smallest = smallest_index(nums);
        SortedArray[i] = nums[smallest];
        nums.erase(nums.begin() + smallest);
    }
    
    return SortedArray;
}

int main() {
    vector<int> arr = {10, 5, 7, 8, 1};
    vector<int> sortedArr = selection_sort(arr);
    for(int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }
    return 0;
}
