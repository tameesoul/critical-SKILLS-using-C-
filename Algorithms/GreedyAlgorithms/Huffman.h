#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

// A node in the Huffman tree
class HuffmanNode {
public:
  char data;          // The character represented by the node
  int freq;           // The frequency of the character in the input message
  HuffmanNode *left;  // Pointer to the left child of the node
  HuffmanNode *right; // Pointer to the right child of the node

  HuffmanNode(char data, int freq) {
    this->data = data;
    this->freq = freq;
    this->left = this->right = nullptr;
  }
};
// Comparison function for the priority queue used in building the Huffman tree
struct CompareNodes {
  bool operator()(HuffmanNode *left, HuffmanNode *right) {
    return left->freq >
           right->freq; // Lower frequency nodes have higher priority
  }
};

class Huffman {
public:
  char internal_char = (char)0;
  unordered_map<char, string>
      codes; // Map to store the codes for each character
  priority_queue<HuffmanNode *, vector<HuffmanNode *>, CompareNodes> minHeap;

  Huffman(string message);

  void generateCodes(HuffmanNode *node, string str);
};

#endif
