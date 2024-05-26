#include "Huffman.h"
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
  string msg =
      "The output from Huffman's algorithm can be viewed as a variable length "
      "code table for encoding a source symbol. The algorithm derives this "
      "table from the estimated probability or frequency of occurrence for "
      "each possible value of the source symbol. as in other entropy encoding "
      "methods, more common symbols are generally represented using fewer bits "
      "than less common symbols. Huffman's method can be efficiently "
      "implemented, finding a code in time linear to the number of input "
      "weights if these weights are sorted. However, although optimal among "
      "methods encoding symbols separately, Huffman coding is not always "
      "optimal among all compression methods it is replaced with arithmetic "
      "coding or asymmetric numeral systems if better compression ratio is "
      "required.";

  Huffman huff(msg);

  for (auto const &[k, v] : huff.codes) {
    cout << k << " " << v << endl;
  }

  return 0;
}
