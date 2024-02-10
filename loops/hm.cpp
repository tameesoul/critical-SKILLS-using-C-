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

    // int x , y ; //// 2 , 5 
    // cin>>x >> y;  /// 2, 5 
    // int res = 1;
    // while(y>0) /// 4  >0
    // {
    //     res *=x; /// x = x*x = 2*2 ;
    //      y--; //// 4 
    // }
    // cout<<res;
    // int num;
    // cin>>num;
    // int dig = 0;
    // while (num>0)
    // {
    //     if(num <10)
    //     {
    //         cout<<1;
    //         return 0;
    //     }
    //     dig +=2;
    //     num /=10;
    // }
    // cout<<dig<<"\n"; 

    // int test; 
    // cin>>test;
    // int n;
    // while (test >0)
    // {
    //     cin>>n;
    //     test--;
    //      int sum = n*(n+1) /2 ;
    // }
    // cout<<n;


    //p1
    // int n1,n2;
    // cin>>n1>>n2;
    // while (n1<= n2)
    // {
    //     cout<<n1<<"\n";
    //     n1++;
    // }



    // p2   
    // int n;
    // char no; 
    // while (n>0)
    // {
    //    cout<<mo;
    //     n--;
    // }


    // p3

    // int n; /// 5
    // cin>>n; /// 5
    // int row = 1; /// 1
    // while (row <= n) /// 2 <= 5
    // { 
    //     int counter = 0; /// 0 
    //     while (counter<row) /// 1<2 t
    //     { 
    //         cout<<"*"; /// * 
    //                  //// **
    //         counter++; ///1
    //     }
    //     cout<<"\n"; // space 
    //     row++;/// 2 
    // 

    
        // int N;
        // cin>>N;
        // int row = N;
        // while (row>0)
        // {
        //     int counter = 1 ;
        //     while (counter <= row);
        //     {
        //         cout<<"*";
        //         ++counter; 
        //     }
        //     cout<<"\n";
        //     row--;
        // }
        

        //// p5 
        int n;
        cin>>n;
        int even_cnt = 0 , odd_cnt = 0;
        double even_sum = 0 , odd_sum = 0;
        int cnt = 1;
        while (cnt <=n)
        {
            double value; 
            cin>>value;
            if(cnt % 2 ==0 )
            {
                even_sum = value , even_cnt++;
            }else {
                odd_sum = value , odd_cnt++;
            }
            cnt++;
        }

        cout<< even_sum / even_cnt<<"\n";
        cout<< odd_sum / odd_cnt<<"\n";
    
}