#include<iostream>
using namespace std;
 
int main() {
	int t = 0;
	for (int c = 0; c < 3; ++c) {
		for (int var = 0; var < 4; ++var)
			for (int h = 0; h < 2; ++h)
				++t;
			++t;
		++t;
	}
	cout << t;
 
	return 0;
}