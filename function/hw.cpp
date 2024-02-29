#include<iostream>
#include<cmath>
using namespace std;

const int MAX = 1000;
string name[MAX];
int age[MAX];
double salary[MAX];
char gender[MAX];
int cnt = 0;

int menu()
{
	int choice = -1;
	while (choice == -1)
	{
	cout<<"\n Enter Your Choice \n";
	cout << "1-Add new Employee\n";
    cout << "2-Print all Employee\n";
    cout << "3-Delete by age\n";
    cout << "4-Edit salary by name\n";
    cout << "5-Exit\n";
    cin >> choice;
	if(!(1<=choice && choice<=5))
	{
		cout<<"invalid choice .try again\n";
		choice = -1;
	}
	}
	return choice;
}

void add_new()
{
	cout << "Enter Employee Name: "; cin >> name[cnt]; cout << "\n";
    cout << "Enter Employee salary: "; cin >> salary[cnt]; cout << "\n";
    cout << "Enter Employee gender: "; cin >> gender[cnt]; cout << "\n";
    cout << "Enter Employee age: "; cin >> age[cnt]; cout << "\n";
    cnt++;
}

void print_all()
{
	for(int i = 0;i<cnt;i++)
	{
		cout<<name[i] << " " << salary[i] <<" " << age[i] << " " << gender[i] <<"\n";
	}
}

void delete_by_age()
{
	cout<<"enter start and end for ages\n";
	int start , end;
	cin >> start >> end;
	for(int i = 0;i<cnt;i++)
	{
		if(start<=age[i]&&age[i]<=end)
		{
			age[i] = -1;
		}
	}
}

void edit_by_name()
{
	cout<<"enter name of emp and new salary \n";
	string Qname;
	int new_salary;
	cin >> Qname >> new_salary ;
	bool is_found = false;
	for(int i = 0;i<cnt;i++)
	{
		if(name[i] == Qname)
		is_found = true;
		salary[i] = new_salary;
		break;
	}
	if(!is_found)
	{
		cout<<"No employee with this name";
	}
}
void employee_system()
{
	while (true)
	{
	int choice = menu();
	if(choice== 1)
	{
		add_new();
	}else if (choice == 2)
	{
		print_all();	
	}
	else if(choice ==3)
	{
		delete_by_age();
	}
	else if (choice ==4)
	{
		edit_by_name();
	}
	else {
		break;
	}
	}
}



int main()
{
	employee_system();
}


