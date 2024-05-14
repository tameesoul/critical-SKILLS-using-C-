#include<iostream>
#include<cmath>
using namespace std;

void Trapezoid(double a , double b , double h)
{
    double A = ((a+b)/2) * h;
    cout<<A;
}

int main()
{
    double a , b , h;
    cin >> a>>b >> h;
    Trapezoid(a,b,h);
}