#include<iostream>
using namespace std;

int power(int n , int p = 2)
{
    if(n==0)
    {
        return 1;
    }
    p--;
      power(n)*n;
}
int main()
{
    cout<<power(6,4);
}