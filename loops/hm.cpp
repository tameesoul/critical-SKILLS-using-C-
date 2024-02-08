#include<iostream>
using namespace std;

int main()
{

    ////// p1 
    // int number; 
    // cin>>number;
    // while (number>0)
    // {
    //     if(number % 3 == 0)
    //     {
    //         cout<<number<<"\n";
    //     }
    //     number --;
    // }
    // return 0;

    int x , y ; //// 2 , 5 
    cin>>x >> y;  /// 2, 5 
    int res = 1;
    while(y>0) /// 4  >0
    {
        res *=x; /// x = x*x = 2*2 ;
         y--; //// 4 
    }
    cout<<res;
}