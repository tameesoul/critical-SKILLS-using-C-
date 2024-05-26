#include "Huffman.h"

Huffman::Huffman(string message) {
  unordered_map<char, int> freqHash;
  for (int i = 0; i < message.length(); i++) {
    if (freqHash.count(message[i]) == 0) {
      freqHash[message[i]] = 1;
    } else {
      freqHash[message[i]]++;
    }
  }

  for (auto const &k : freqHash) {
    HuffmanNode *newNode = new HuffmanNode(k.first, k.second);
    minHeap.push(newNode);
  }

  HuffmanNode *top, *left, *right;
  int newFreq;
  while (minHeap.size() != 1) {
    left = minHeap.top();
    minHeap.pop();
    right = minHeap.top();
    minHeap.pop();
    newFreq = left->freq + right->freq;
    top = new HuffmanNode(internal_char, newFreq);
    top->left = left;
    top->right = right;
    minHeap.push(top);
  }

  generateCodes(minHeap.top(), "");
}
void Huffman::generateCodes(HuffmanNode *node, string str) {
  if (node == nullptr) {
    return;
  }
  if (node->data != internal_char) {
    codes[node->data] = str;
  }

  generateCodes(node->left, str + "0");
  generateCodes(node->right, str + "1");
}