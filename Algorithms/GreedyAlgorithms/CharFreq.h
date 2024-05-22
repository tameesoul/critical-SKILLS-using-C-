#ifndef CHARFREQ_H
#define CHARFREQ_H

#include <iostream>
#include <unordered_map>
using namespace std;
class CharFreq {
public:  CharFreq();

  void ASCIIMethod(string message);

  void AnyCodeMethod(string message);
    void SortHash(unordered_map<char, int> freq);
  void sort(int array[][2], int start, int end);

  void merge(int array[][2], int start, int mid, int end);
};

#endif
