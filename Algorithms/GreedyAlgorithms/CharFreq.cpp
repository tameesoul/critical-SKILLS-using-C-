#include "CharFreq.h"
using namespace std;

CharFreq::CharFreq(){};


void CharFreq::ASCIIMethod(string message)
{
    int freq [128] ={0};
    cout<<"ASCIIMethod\n";
    for(int i = 0;i<message.length();i++)
    {
        int current_char = (int)message[i];
        freq[current_char]++;
    }
    
    for(int i =0;i<128;i++)
    {
        if(freq[i]>0)
        {
            char c = (char)i;
            cout<< c <<" " <<freq[i]<<"\n";
        }
    }
}
void CharFreq::AnyCodeMethod(string message)
{
     unordered_map<char, int>freq;
     for(int i = 0;i<message.length();i++)
     {
         if(freq.find(message[i]) == freq.end())
         {
             freq[message[i]] = 1;
         }
         else
         {
             freq[message[i]]++;
         }
     }
     
     for(auto value : freq)
     {
         cout<<value.first << " " << value.second <<"\n";
     }
}
void CharFreq::SortHash(unordered_map<char, int> freq)
{
    int freq_Array[freq.size()][2];
    int i = 0;
    for(auto i = freq.begin();it!=freq.end;it++)
    {
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

  for (i = 0; i < left_length; i++) {
    left_array[i][0] = array[start + i][0];
    left_array[i][1] = array[start + i][1];
  }

  for (j = 0; j < right_length; j++) {
    right_array[j][0] = array[mid + 1 + j][0];
    right_array[j][1] = array[mid + 1 + j][1];
  }

  i = 0;
  j = 0;
  k = start;
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

  while (i < left_length) {
    array[k][0] = left_array[i][0];
    array[k][1] = left_array[i][1];
    i++;
    k++;
  }

  while (j < right_length) {
    array[k][0] = right_array[j][0];
    array[k][1] = right_array[j][1];
    j++;
    k++;
  }
}

