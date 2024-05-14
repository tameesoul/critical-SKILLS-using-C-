#include<iostream>
#include<cmath>
using namespace std;


void parallelogram(double b , double h)
{
    double A = b * h;
    cout<<A;
}
int main()
{
    double b , h;
    cin>>b >> h;

    parallelogram(b,h);
}