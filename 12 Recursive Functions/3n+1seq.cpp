#include<iostream>
using namespace std;

void fac(int n)
{
    cout<<n<<" ";
    if (n == 1)
    
        return;
    

    if (n % 2 == 0)
      fac(n/2);
    else
      fac(3 * n + 1);
}

int main()
{
    fac(6);
   

    return 0;
}
