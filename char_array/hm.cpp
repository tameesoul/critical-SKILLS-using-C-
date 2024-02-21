#include<iostream>
#include <istream>
using namespace std;

int main()
{
	string words[] {"Cpp", "is", "challenging!"};
 
	int len = 3;
	string all;
	for (int i = 0; i < 3; ++i)
		all += words[i] + ",";
 
	cout<<all;
	return 0;
}