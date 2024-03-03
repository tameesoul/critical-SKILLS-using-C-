#include<iostream>
using namespace std;

int  fact(int n)
{
    int fac = 0;
    if(n==1)
    {
        return 1;
    }

    return n * fact(n-1);
}
int main()
{
    int result = fact(6);
    cout<<result<<" ";
}