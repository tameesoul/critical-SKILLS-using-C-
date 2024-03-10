#include<iostream>
using namespace std;

string name[100];
int specialization[15];
bool status[100];
int cnt = 0;
void next_patient()
{
    cin>>specialization[cnt];
    for(int i = 0;i<cnt;i++)
    {
        if(specialization[i] == specialization[cnt])
        cout<<name[i]<<"\n";
        break;
    }
}
void add_new()
{
    cout<<"Enter the specialization for the patient"<<" "; cin>>specialization[cnt]; cout<<"\n";
    cout<<"Enter the name of the patient"<<" "; cin>>name[cnt];cout<<"\n";
    cout<<"Enter the patient status"<<" "; cin>>status[cnt];cout<<"\n";
    cnt ++;
    cout<<"added successfully\n";
}
void printing_patients()
{
    for(int i = 0;i<cnt;i++)
    {
        if(status[i]==1)
        {
        }
        cout<<name[i]<<" " << specialization[i]<< " " <<status[i]<<" "<<"\n";

    }
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
         else if (choice ==2)
         {
            printing_patients();
         }
         else if (choice ==3)
         {
            next_patient();
         }
         else if(choice ==4)
         {
            break;
         }
    }


}
int main()
{
    system();   
}