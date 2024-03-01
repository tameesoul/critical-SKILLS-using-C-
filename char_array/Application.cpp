#include <iostream>
using namespace std;

const int MAX_EMPLOYEES = 100;

// Function to add a new employee
void addEmployee(string name[], int age[], float salary[], char Gender[], int&cnt) {
    cout << "Enter Employee Name: "; cin >> name[cnt]; cout << "\n";
    cout << "Enter Employee salary: "; cin >> salary[cnt]; cout << "\n";
    cout << "Enter Employee gender: "; cin >> Gender[cnt]; cout << "\n";
    cout << "Enter Employee age: "; cin >> age[cnt]; cout << "\n";
    cnt++;
}

// Function to print all employees
void printEmployees(string name[], int age[], float salary[], char Gender[], int cnt) {
    for (int i = 0; i < cnt; i++) {
        cout << name[i] << "\n";
        cout << age[i] << "\n";
        cout << salary[i] << "\n";
        cout << Gender[i] << "\n";
    }
}

// Function to edit salary by name
void editSalaryByName(string name[], float salary[], int cnt) {
    string QName;
    cin >> QName;
    for (int i = 0; i < cnt; i++) {
        if (QName == name[i]) {
            int new_salary;
            cin >> new_salary;
            salary[i] = new_salary;
            break;
        }
    }
}

int main() {
    int choice;
    int age[MAX_EMPLOYEES] = { 0 };
    float salary[MAX_EMPLOYEES] = { 0 };
    char Gender[MAX_EMPLOYEES];
    string name[MAX_EMPLOYEES];
    int cnt = 0;

    do {
        cout << "1-Add new Employee\n";
        cout << "2-Print all Employee\n";
        cout << "3-Delete by age\n";
        cout << "4-Edit salary by name\n";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(name, age, salary, Gender, cnt);
                break;
            case 2:
                printEmployees(name, age, salary, Gender, cnt);
                break;
            case 3:
                // Implement delete by age functionality
                break;
            case 4:
                editSalaryByName(name, salary, cnt);
                cout << "Updated SUCCESSFULLY\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

        cout << "TO END THE PROGRAM PRESS 0, to continue press 1\n";
        cin >> choice;
    } while (choice != 0);

    return 0;
}
