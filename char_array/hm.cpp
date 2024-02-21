#include<iostream>
#include <istream>
using namespace std;

int main()
{
  string s1 , s2;
  cin>>s1 >>s2;
  int max_size = s1.size();
  if(max_size<s2.size())
  {
    max_size = s2.size();
  }

  for(int i = 0;i<max_size;i++)
  {
    if(i<s1.size())
    {
        cout<<s1[i];
    }
    if(i<s2.size())
    {
        cout<<s2[i];
    }

    cout<<"\n";
  }
}