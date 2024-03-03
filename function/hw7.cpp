#include<iostream>
using namespace std;



bool is_prime(int n)
{
    if(n == 1)
    return false;
    for(int i = 0;i<n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
        return true;
    }
}


int nth_prime(int n)
{
    for(int i =2;;++i)
    {
        if(is_prime(i))
        --n;
        if(n==0)
        return i;
    }
    return -1;
}

int main()
{
    for(int i = 1;i<20;i++)
    {
        cout<<nth_prime(i)<<" ";
    }
}