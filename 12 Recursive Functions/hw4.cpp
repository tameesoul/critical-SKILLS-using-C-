#include<iostream>
using namespace std;

void npluso(int n)
{
    cout<<n<<" "; // 6 , 3 
    if(n == 1) // 6 != 1  , 3 != 1
    {
        return;
    }
    if(n % 2 == 0 ) /// !=
    {
        npluso(n/2); /// 3 
    }
    else{
       npluso(3*n+1);  /// 3 * 3
    }
}
int main()
{
    npluso(6);
}