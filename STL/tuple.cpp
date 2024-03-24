#include<iostream>
#include<tuple>
using namespace std;



int main()
{
    tuple<char , int , string> st1;
    st1 = make_tuple('c',10,"Ahmed");
    cout<<get<0>(st1) << " " << get<1>(st1)<< " " << get<2>(st1)<<" ";
    get<1>(st1) = 20;
    cout<<"\n";
    cout<<get<0>(st1) << " " << get<1>(st1)<< " " << get<2>(st1)<<" ";
        cout<<"\n";
     cout<<(st1<=st1);
}