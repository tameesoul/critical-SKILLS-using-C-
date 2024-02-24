#include <iostream>
using namespace std;

int main()
{
    cout<<"1-Add new Employee\n";
    cout<<"2-print all Employee\n";
    cout<<"2-Delete by age\n";
    cout<<"3-edit salary by name\n";
    int choice;
    int age[100] = {0};
    float salary[100]={0};
    char Gender [100];
    string name[100];
    int cnt =  0;
    cin >> choice; 
    if(choice == 1)
    {
        for(int i = 0;i<1;i++)
        {
            cout<<"Enter Employee Name:"<< " ";cin>>name[0];cout<<"\n"; 
            cout<<"Enter Employee salary:"<< " ";cin>>salary[0];cout<<"\n";
            cout<<"Enter Employee gender:"<< " ";cin>>Gender[0];cout<<"\n";
            cout<<"Enter Employee age:"<< " ";cin>>age[0];cout<<"\n";
            cnt++;
            break;
        } 
    }
    int end_prog;
    cout<<"ADDED SUCCESSFULLY, TO END THE PROGRAM PRESS 0 to continue press 1\n";
    cin >> end_prog;
    if(end_prog == 0)
    {
        return 0;
    }else(end_prog ==1);
    {
    cout<<"1-Add new Employee\n";
    cout<<"2-print all Employee\n";
    cout<<"3-Delete by age\n";
    cout<<"4-edit salary by name\n";
    }
    cin>>choice;
    if(choice == 2)
    {
        for(int i =0;i<cnt;i++)
        {
            cout<<name[i]<<"\n";
            cout<<age[i]<<"\n";
            cout<<salary[i]<<"\n";
            cout<<Gender[i]<<"\n";
        }
    }
      cout<< "TO END THE PROGRAM PRESS 0 to continue press 1\n";
    cin >>end_prog;
    if(end_prog == 0)
    {
        return 0;
    }else(end_prog ==1);
    {
    cout<<"1-Add new Employee\n";
    cout<<"2-print all Employee\n";
    cout<<"3-Delete by age\n";
    cout<<"4-edit salary by name\n";
    }
    if(choice == 4)
    {
        string QName;
        cin>>QName;
        for(int i =0;i<cnt;i++)
        {
            if(QName == name[i])
            {
                int new_salary; 
                cin>>new_salary;
                salary[i] = new_salary;
                break;
            }
        }
    }
    cout<<"updated SUCCESSFULLY, TO END THE PROGRAM PRESS 0 to continue press 1\n";
    cin >> end_prog;
    if(end_prog == 0)
    {
        return 0;
    }else(end_prog ==1);
    {
    cout<<"1-Add new Employee\n";
    cout<<"2-print all Employee\n";
    cout<<"2-Delete by age\n";
    cout<<"3-edit salary by name\n";
    }
    cin>>choice;
    if(choice == 2)
    {
        for(int i =0;i<cnt;i++)
        {
            cout<<name[i]<<"\n";
            cout<<age[i]<<"\n";
            cout<<salary[i]<<"\n";
            cout<<Gender[i]<<"\n";
        }
    }
}