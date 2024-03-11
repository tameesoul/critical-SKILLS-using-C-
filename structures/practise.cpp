#include <iostream>
using namespace std;

struct employee
{
	string name;
	int age;
	double salary;
	char gender;


	void read_employee()
	{
		cin >> name >> age >> salary >> gender;
	}
	void print_employee()
	{
		cout<< name<<" "<<age<<" " <<salary<<" " << gender; 
	}
};

const int MAX = 1000;

employee employee_arr[MAX];
int added = 0;


void print_emp()
{
	for(int i = 0;i<added;i++)
	{
		employee_arr[i].print_employee();
	}
}

int main()
{
	employee_arr[added++].read_employee();
	print_emp();
}




