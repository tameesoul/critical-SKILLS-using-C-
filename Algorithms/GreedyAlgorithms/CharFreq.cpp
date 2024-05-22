#include "CharFreq.h"
using namespace std;

CharFreq::CharFreq() {}

void CharFreq::ASCIIMethod(string message) {
  cout << "ASCIIMethod" << endl;

  int freq[127] = {0}; 
  for (int i = 0; i < message.length(); i++) {
    int current_code =
        (int)message[i];  
    freq[current_code]++; 
  }

  for (int i = 0; i < 127; i++) {
    if (freq[i] > 0) {
      char c = (char)i; 
      cout << c << " " << freq[i] << endl;
    }
  }
}

void CharFreq::AnyCodeMethod(string message) {
  cout << "AnyCodeMethod" << endl;

  unordered_map<char, int>
      freq;

  for (int i = 0; i < message.length(); i++) {
    if (freq.find(message[i]) == freq.end()) {
     
      freq[message[i]] = 1;
    } else {
      freq[message[i]]++;
    }
  }

  for (auto entry : freq) {
    cout << entry.first << " " << entry.second << endl;
  }

  SortHash(freq); 

void CharFreq::SortHash(unordered_map<char, int> freq) {
  int freqArray[freq.size()][2];

  int i = 0;
  for (auto it = freq.begin(); it != freq.end(); it++) {
    freqArray[i][0] = (int)it->first;
    freqArray[i][1] = it->second;
    i++;
  }

  sort(freqArray, 0, freq.size() - 1);

  cout << "Print Sorted data ..." << endl;
  for (i = 0; i < freq.size(); i++) {
    cout << (char)freqArray[i][0] << " " << freqArray[i][1] << endl;
  }
}

void CharFreq::sort(int array[][2], int start, int end) {
  if (end <= start) {
    return;
  }

  int midpoint = (end + start) / 2;
  sort(array, start, midpoint);
  sort(array, midpoint + 1, end);
  merge(array, start, midpoint, end);
}

void CharFreq::merge(int array[][2], int start, int mid, int end) {
  int i, j, k;
  int left_length = mid - start + 1;
  int right_length = end - mid;

  int left_array[left_length][2];
  int right_array[right_length][2];

  // copy left half of array into left_array
  for (i = 0; i < left_length; i++) {
    left_array[i][0] = array[start + i][0];
    left_array[i][1] = array[start + i][1];
  }

  // copy right half of array into right_array
  for (j = 0; j < right_length; j++) {
    right_array[j][0] = array[mid + 1 + j][0];
    right_array[j][1] = array[mid + 1 + j][1];
  }

  i = 0;
  j = 0;
  k = start;

  // merge the two halves of the array
  while (i < left_length && j < right_length) {
    if (left_array[i][1] <= right_array[j][1]) {
      array[k][0] = left_array[i][0];
      array[k][1] = left_array[i][1];
      i++;
    } else {
      array[k][0] = right_array[j][0];
      array[k][1] = right_array[j][1];
      j++;
    }
    k++;
  }

  // copy any remaining elements from the left half of the array
  while (i < left_length) {
    array[k][0] = left_array[i][0];
    array[k][1] = left_array[i][1];
    i++;
    k++;
  }

  // copy any remaining elements from the right half of the array
  while (j < right_length) {
    array[k][0] = right_array[j][0];
    array[k][1] = right_array[j][1];
    j++;
    k++;
  }
}



