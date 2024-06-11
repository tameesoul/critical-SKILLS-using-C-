#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    string name1 = "hello";
    string name2 = "olle";
    unordered_map<int , int>casting;
    for(int i = 0 ; i<10;i++)
    {
        casting[name1[i]] = name2[i];
    }
}