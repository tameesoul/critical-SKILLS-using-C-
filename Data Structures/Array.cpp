#include <cstring>
#include <iostream>
using namespace std;

class Array
{
public:
    template<typename T>
    void resize(T *&source, int newsize)
    {
        if (newsize <= 0) return;
        if (source == nullptr) return;
        if (newsize == static_cast<int>(sizeof(source)))
            return;

        T *newArray = new T[newsize];
        memcpy(newArray, source, sizeof(T) * newsize);
        delete[] source;
        source = newArray;
    }

    template <typename T> T GetAt(T *source, int index, int sizeOf) {
    if (index < 0)
      return T();
    char *zeroAddr = reinterpret_cast<char *>(source);
    char *itemAddr = zeroAddr + (index * sizeOf);
    return *reinterpret_cast<T *>(itemAddr);
  }
};

int main()
{
   int *arr = new int[3]{4654, 921, 762};
  Array our;
  our.resize(arr, 5);
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  int item = our.GetAt(arr, 1, sizeof(int));
  cout << item << "\n";
  cout << arr[1] << "\n";

  delete[] arr;
  return 0;
}
