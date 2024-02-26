#include<iostream>
using namespace std;
int main()
{
   int di[] = {1, 0, -1, 0};
    int dj[] = {0, 1, 0, -1};
    int i = 4, j = 7;
 
    for (int d = 0; d < 4; ++d) {
        int ni = i + di[d]; /// ni = 4 + dj[0] 1 
        int nj = j + dj[d]; /// nj =
        cout << ni << " " << nj << "\n";
    }
}