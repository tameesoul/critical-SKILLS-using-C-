#include<iostream>
#include<cmath>
using namespace std;
 double const Pi = 3.14159;
 void CircleArea(double r)
 {
    double A = Pi * pow(r,2);
    cout<<A;
 }
int main()
{
    double r;
    cin>>r;
    CircleArea(r);  
}