#include<iostream>
using namespace std;

string name[100];
int specialization[15];
bool status[100];
int cnt = 1;
void add_new()
{
    cout<<"Enter the specialization for the patient"<<" "; cin>>specialization[cnt]; cout<<"\n";
    cout<<"Enter the name of the patient"<<" "; cin>>name[cnt];cout<<"\n";
    cout<<"Enter the patient status"<<" "; cin>>status[cnt];cout<<"\n";
    cnt ++;

    cout<<"added successfully\n";
}

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
            add_new();
         }
    }
}
int main()
{
    system();   
}