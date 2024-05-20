#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& items, int start, int mid, int end) {
    int left_length = mid - start + 1;
    int right_length = end - mid;
    
    vector<int> left_array(left_length);
    vector<int> right_array(right_length);

    for (int i = 0; i < left_length; i++) {
        left_array[i] = items[start + i];
    }
    for (int j = 0; j < right_length; j++) {
        right_array[j] = items[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    // Merge negative numbers first
    while (i < left_length && left_array[i] < 0) {
        items[k++] = left_array[i++];
    }
    while (j < right_length && right_array[j] < 0) {
        items[k++] = right_array[j++];
    }

    // Merge remaining negative and positive numbers
    while (i < left_length) {
        items[k++] = left_array[i++];
    }
    while (j < right_length) {
        items[k++] = right_array[j++];
    }
}

void mergeSort(vector<int>& items, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(items, start, mid);
        mergeSort(items, mid + 1, end);
        merge(items, start, mid, end);
    }
}

int main() {
    vector<int> items = {-6,4 ,-5, 3, 5, 7,-3, -8, 3, -10 , 8};
    mergeSort(items, 0, items.size() - 1);
    for (int i = 0; i < items.size(); i++) {
        cout << items[i] << " ";
    }
    cout << endl;
    return 0;
}
