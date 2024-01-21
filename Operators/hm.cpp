#include<iostream>
using namespace std;

int main()
{
    int a = 0, b = 1; /// 0 , 1 
	cout<<a++<<"\n"; //// o(0) then 1 
	cout<<++a<<"\n"; /// o(2) 
	a += 2*b+1; /// a = 2+2*1+1 // 5 
	b = ++a * 2; /// b = ++5 * 2 // 12
	cout<<a<<" "<<b<<"\n"; /// (6 ,12) 

	b = a;  /// b = 6 
	a = 12 + a / 3 / 2 - 2 * 2; /// 6
	cout<<a<<"\n"; ///(6)  

	a = b; /// a = 6 
	a = ((12 + a) / 3 / 2 - 2) * 2; /// 2 
	cout<<a<<"\n"; // (2) 

}