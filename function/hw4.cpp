#include<iostream>
using namespace std;

int cnt = 0;

void sum()
{
    double x, y;
    cin >> x >> y;
    float sum = x + y;
    cnt++;
    cout << sum << " ";
}

void sub()
{
    double x, y;
    cin >> x >> y;
    int sub = x - y;
    cnt++;
    cout << sub << " ";
} 

void div()
{
    double x, y;
    cin >> x >> y;
    float division = x / y;
    cnt++;
    cout << division << " ";
}

void multi()
{
    double x, y;
    cin >> x >> y;
    float product = x * y;
    cnt++;
    cout << product << " ";
}

int menu()
{
    int choice = -1;
    while(choice == -1)
    {
        cout << "press 1 for sum two numbers\n";
        cout << "press 2 for sub two numbers\n";
        cout << "press 3 for div two numbers\n";
        cout << "press 4 for multi two numbers\n";
        cout << "press 5 exit \n";
        cin >> choice;
        if(!(1 <= choice && choice <= 5))
        {
            cout << "invalid number\n";
            choice  = -1;
        }  
    }
    return choice;
}

void calc_system()
{
    while(true)
    {
        int choice = menu();
        if(choice == 1)
        {
            sum();
            cout << "\n";
            cout << "the time for using is " << cnt << "\n";
        }
        else if (choice == 2)
        {
            sub();
            cout << "\n";
            cout << "the time for using is " << cnt << "\n";
        }
        else if (choice == 3)
        {
            div();
            cout << "\n";
            cout << "the time for using is " << cnt << "\n";
        }
        else if (choice == 4)
        {
            multi();
            cout << "\n";
            cout << "the time for using is " << cnt << "\n";
        }
        else
        {
            break;
        }
    }
}

int main()
{
    calc_system();
    return 0;
}
