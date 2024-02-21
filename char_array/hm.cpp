#include<iostream>
#include <istream>
using namespace std;

int main()
{
    int value;
    string line;
    cin>>value;
    getline(cin,line);
    getline(cin,line);
    cout<<value <<"\n"<<"**"<<line<<"**";
}