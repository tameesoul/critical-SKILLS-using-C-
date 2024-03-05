#include<iostream>
using namespace std;

int power(int n , int p = 2)
{
    if(p==0) // 4 == 1 n
    
        return 1 ;
    
    return n * power(n , p-1); 
}
int main()
{
    cout<<power(6,4);
}