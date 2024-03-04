#include<iostream>
using namespace std;

int print_n_plus(int n)
{
  
    if(n == 1)
    return 1 ;
    if(n%2 == 0)
    { 
        return 1+print_n_plus(n/2);
    } // 3
    else
    {
      
     return 1+print_n_plus(3*n+1); 
      }

}

int main()
{
 cout<<print_n_plus(6);
}