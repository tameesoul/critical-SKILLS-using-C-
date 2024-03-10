#include <iostream>
using namespace std;

struct emplyee {
	string name;
	int age;
	double salary;
	char gender;
};

const int MAX = 10000;

emplyee emplyees_arr[MAX];
int added = 0;	// Number of employees




int main() {
	emplyee first = { "mostafa", 10, 1200.5, 'M' };
	emplyees_arr[added++] = first;
	emplyees_arr[added].name = "hani";
	emplyees_arr[added].age = 55;
	emplyees_arr[added].salary = 750;
	emplyees_arr[added].gender = 'M';
	added++;

}


