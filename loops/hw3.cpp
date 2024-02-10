#include<iostream>
using namespace std;
 
int main()
{
 
     /// P1 
    // int n = 10; /// 10 
    // int a = 0 , b = 1; /// 0 , 1 
    // cout<<a << " "; /// 0 
    // for(int cnt = 2; cnt<=10;cnt++) /// 6 , 6<10
    // {
    //     int c = a+b; /// 2 + 5 = 5
    //     a = b; /// a = 5
    //     b = c; /// b = 8 
    //     cout<<c <<" "; /// 8  
    // }

    /// P2
   int n, m , sum ; /// 5 , 5 , 4
    cin >> n >> m >> sum;  // 5 ,5,4
    int cnt = 0; // 0
    for (int a = 1; a < n; a++) { /// 4<5 ? yes  
    int b = sum - a; /// b = 4-4 = 0 
    if(1<=b && b<=m) /// 1<=1 y && 1<=5 ? yes  
    {
        cnt++; /// 3
    }
    }
    cout << cnt << "\n";

    return 0;
}