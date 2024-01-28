#include<iostream>
using namespace std;

int main(void)
{

	// int n1 , n2; 
	// char op; 
	// cin>>n1 >> op >> n2;
	// if(op =='+')
	// {
	// 	cout<<n1+n2<<"\n";
	// }else if (op == '*')
	// {
	// 	cout<<n1 * n2 <<"\n";
	// }else if (op == '/')
	// {
	// 	cout<<n1/n2<<"\n";
	// }else if(op =='-')
	// {
	// 	cout<<n1 -n2<<"\n";
	// }else {
	// 	cout<<"operation is not found";
	// }

	//p2
	// int n1,n2,n3; // 10 , 20 , 30 
	// cin>>n1>>n2>>n3; 
	// int ans = n1; //// 10 
	// if(ans > n2) /// 10 > 20 ?
	// 	ans = n2; //10
	// if(ans > n3) // 10 > 30 ? 
	// ans = n3; //10
	// cout<<ans; //10

	int n;
	cin >>n;
	if(n%2==0)
	cout<<n%10<<"\n";
	else if(n%2!=0 && n<1000)
	cout<<n%100<<"\n";
	else if(n%2!=0 && 1000>n<1000000)	
	cout<<n%10000<<"\n";
	else
		cout<<-n<<"\n";
	
}
