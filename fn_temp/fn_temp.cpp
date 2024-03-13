#include<iostream>
using namespace std;

template <typename type>
type mymax(type a  , type b)
{
    if(a > b)
    return a;
    return b;
}
int main()
{
    cout<<mymax(1,3)<<"\n";
    cout<<mymax(1.4,3)<<"\n"; /// syntax error 
    cout<<mymax(int)(1.4,5)<<"\n";
}