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
    int n1 , n2 , n3; //123
    cin>>n1>>n2>>n3; // 123
    if(n1> n2 && n1 > n3 && n2 > n3  ) 
    cout << n3 << " " << n2 << " " << n1 << "\n";  
    else if (n2>n1 && n2 >n3 && n1>n3)
    {
        cout<< n3 <<" " << n1 << " " << n2 <<"\n";
    }
    else 
    cout<< n1 << " " << n2 << " " << n3 <<"\n";
}