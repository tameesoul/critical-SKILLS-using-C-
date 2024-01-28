#include<iostream>
using namespace std;

int main()
{

    int num; 
    cin>>num;
    int last1 = num %10;
    num /=10;
    int last2 = num %10;
    num/=10;
    int last3 = num%10;
    num/=10;
    cout<<last1+last2 +last3 <<" "<<num;
}