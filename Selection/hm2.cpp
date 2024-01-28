#include<iostream>
using namespace std;

int main(void)
{
    // /// p1
    // int n1 ,n2;
    // cin>>n1>>n2;
    // if(n1 %2 != 0 && n2 %2 != 0)
    // cout<<n1 * n2;
    // else if(n1 %2 ==0 && n2 %2 ==0)
    // cout<<n1/n2;
    // else if (n1 %2 !=0 && n2%2==0)
    // cout<<n1+n2;
    // else 
    // cout<< n1 - n2;
    //p2
//     int n1 , n2 , n3; //123
//     cin>>n1>>n2>>n3; // 123
//     if(n1> n2 && n1 > n3 && n2 > n3  ) 
//     cout << n3 << " " << n2 << " " << n1 << "\n";  
//     else if (n2>n1 && n2 >n3 && n1>n3)
//     {
//         cout<< n3 <<" " << n1 << " " << n2 <<"\n";
//     }
//     else 
//     cout<< n1 << " " << n2 << " " << n3 <<"\n";

// p3
// int n1 , n2 , n3;
// cin >> n1 >>n2 >>n3;
//     if (n1 > 100 && n2 >n3)
//     cout<< n2; 
//     else if (n2 >100 && n1 > n3)
//     cout<<n1;
//     else if (n3 > 100 && n1 >n2)
//     cout << n1 ;
//     else if ()


int p, n1,n2,n3,n4 , n5;
cin>> p >> n1 >> n2 >> n3 >> n4 >>n5;
int big = 0 ;
int less = 0;
if(n1>p)
big +=1;
else 
less +=1;
if (n2>p)
big +=1;
else 
less +=1;
if (n3>p)
big +=1;
else 
less +=1;
if (n4>p)
big +=1;
else 
less +=1;
if (n5>p)
big +=1;
else 
less +=1;

cout<< big << " " << less <<"\n";
 }