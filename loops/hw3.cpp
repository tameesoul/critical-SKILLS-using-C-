#include<iostream>
using namespace std;
 
int main()
{
 
    int n = 10; /// 10 
    int a = 0 , b = 1; /// 0 , 1 
    cout<<a << " "; /// 0 
    for(int cnt = 2; cnt<=10;cnt++) /// 6 , 6<10
    {
        int c = a+b; /// 2 + 5 = 5
        a = b; /// a = 5
        b = c; /// b = 8 
        cout<<c <<" "; /// 8  
    } 
}