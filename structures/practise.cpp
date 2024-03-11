#include <iostream>
using namespace std;

struct employee
{
	string name;
	int age;
	double salary;
	char gender;
};

const int MAX = 1000;

employee employee_arr[MAX];
int added = 0;


void add_employee()
{
	cout<<"enter info about employee\n"; 
	cin>>employee_arr[added].name >> employee_arr[added].age >> employee_arr[added].salary
	>> employee_arr[added].gender;
	added++;
}
void print_emp()
{
	for(int i =0;i<added;i++)
	{
		employee e = employee_arr[i]; 
		cout<<e.name<<" " <<e.age << e.salary <<" " <<e.gender;

	}
}
int main()
{
	add_employee();
	print_emp();
}




