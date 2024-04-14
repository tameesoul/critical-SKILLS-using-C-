#include<iostream>
using namespace std;

int main()
{
    int age {25};

    //cout<<age << " " << &age;
  //  cout<<"#######################";
    int &ref =age;
    cout<< ref<< " "<<&ref<<"\n";  
    ///// 25 , 0x61ff08S

    int &ref2 = ref;
    cout<<ref2 <<" "<< &ref2<<"\n";
}