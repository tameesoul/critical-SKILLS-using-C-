#include<iostream>
using namespace std;

int main()
{
    // int a = 0, b = 1; /// 0 , 1 
	// cout<<a++<<"\n"; //// o(0) then 1 
	// cout<<++a<<"\n"; /// o(2) 
	// a += 2*b+1; /// a = 2+2*1+1 // 5 
	// b = ++a * 2; /// b = ++5 * 2 // 12
	// cout<<a<<" "<<b<<"\n"; /// (6 ,12) 

	// b = a;  /// b = 6 
	// a = 12 + a / 3 / 2 - 2 * 2; /// 9
	// cout<<a<<"\n"; ///(6)  

	// a = b; /// a = 6 
	// a = ((12 + a) / 3 / 2 - 2) * 2; /// 2 
	// cout<<a<<"\n"; // (2) 


    
	// int a = 1, b = 1, c;

	// cout<<(c = a+b, a = b, b = c, /// 2 , a = 1 , b= 2
	// 	   c = a+b, a = b, b = c, /// 3 , a=2 , b=3
	// 	   c = a+b, a = b, b = c, /// 5 , a = 3 , b = 5
	// 	   c = a+b, a = b, b = c) 
    //        <<endl;/// 8 , a = 5 , b =  8  
	// return 0;


 
    int a = 210; /// 210 
	a /= 2; // 210/2 
	cout<<a<<"\n"; // 105

	cout<<(a /= 3)<<"\n"; //35 
	cout<<(a /= 5)<<"\n"; //7
	cout<<(a /= 7)<<"\n"; //1 

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n"; ///  -1  

	a = 10;  /// 10 
	cout<<a++ + 10<<"\n"; /// 11+10 = 21 
	cout<<++a + 10<<"\n"; /// 11 + 10 = 21 
	cout<<a-- + 10<<"\n"; // 11 +10 = 21 
	cout<<--a + 10<<"\n"; // 10 +10 = 20 

	int b = 20;   // 20 
	cout<<a++ + ++b<<"\n"; /// 10 + 21 = 31 	// Don't code this way
	cout<<a<<"\n"; // 11 
	++a+=10; /// 12+10 22  	// Don't code this way
	cout<<a<<"\n"; // 22 

}