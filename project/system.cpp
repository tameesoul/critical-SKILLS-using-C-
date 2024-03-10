#include<iostream>
using namespace std;

int menu()
{
    int choice = -1;
    while (choice == -1)
    {
        cout<<"1-Add new Patient\n";
        cout<<"2-print all Patients\n";
        cout<<"3-Get next Patients\n";
        cout<<"4-Exit\n";
        cin >> choice;
        if(!(1<=choice && choice<=4))
        {
            cout<<"invalid choice .try again\n";
            choice = -1;
        }
    }
    return choice;
}
void system()
{
    while (true)
    {
         int choice=menu();
         if(choice ==1)
         {
            cout<<"hello,world\n";
         }
    }
}
int main()
{
    system();   
}