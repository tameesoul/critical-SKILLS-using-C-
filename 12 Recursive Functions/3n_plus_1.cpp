#include<iostream>
using namespace std;

void print_3n_plus(int n)
{
    cout<<n<<" "; // 
    if(n == 1) // 
    {return ;} 
    if(n %2 ==0) //
    { print_3n_plus(n/2);} // 
    else
     {print_3n_plus(3*n+1);}
}

int main()
{
   print_3n_plus(10);
}