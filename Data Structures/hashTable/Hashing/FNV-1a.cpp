#include<iostream>
#include <cstring>
#include<string>
using namespace std;


class Hash 
{
    public:
    uint32_t  Hash32(string str)
    {
        uint32_t OffsetBasis = 2166136261;
        uint32_t FNVPrime = 16777619;
        const char *data = str.c_str();
         size_t len = str.length();
         uint8_t *bytes = new uint8_t[len];
          memcpy(bytes, data, len);
          uint32_t hash = OffsetBasis;
          for (size_t i = 0; i < len; i++)
        {
        hash = hash ^ bytes[i];
        hash = hash * FNVPrime;
        }

        cout << str << ", " << hash << ", " << hex << hash <<"\n";
        delete[] bytes;

        return hash;
    }


    uint64_t Hash64(string str) {
    uint64_t OffsetBasis = 14695981039346656037ull;
    uint64_t FNVPrime = 1099511628211ull;

    const char *data = str.c_str();
    size_t len = str.length();
    uint8_t *bytes = new uint8_t[len];
    memcpy(bytes, data, len);

    uint64_t hash = OffsetBasis;
    for (size_t i = 0; i < len; i++) {
      hash = hash ^ bytes[i];
      hash = hash * FNVPrime;
    }
    cout << str << ", " << hash << ", " <<hex << hash <<"\n";

    delete[] bytes;

    return hash;
  }
};
int main()
{
 Hash hash;
  hash.Hash32("This is Original Text");
  hash.Hash64("This is Original Text");
}