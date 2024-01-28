#include<iostream>
using namespace std;

int main(void)
{

	int n1 , n2; 
	char op; 
	cin>>n1 >> op >> n2;
	if(op =='+')
	{
		cout<<n1+n2<<"\n";
	}else if (op == '*')
	{
		cout<<n1 * n2 <<"\n";
	}else if (op == '/')
	{
		cout<<n1/n2<<"\n";
	}else if(op =='-')
	{
		cout<<n1 -n2<<"\n";
	}else {
		cout<<"operation is not found";
	}
}
