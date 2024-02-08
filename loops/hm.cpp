#include<iostream>
using namespace std;

int main()
{
    int number; 
    cin>>number;
    while (number>0)
    {
        if(number % 3 == 0)
        {
            cout<<number<<"\n";
        }
        number --;
    }
    return 0;
}