#include<iostream>
using namespace std;

int main()
{

    int n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<(n1+n2+n3+n4+n5)/5<<"\n";
    cout<<float(n1+n2+n3)/(n4+n5)<<"\n";
    cout<<(float(n1+n2+n3)/3)/float(((n4+n5))/2);
}