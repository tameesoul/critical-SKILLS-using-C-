#include<iostream>
#include<vector>
#include<algorithm>	
using namespace std;

void test1()
{
    vector<int> v1; 
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    for(int i = 0; (int)i<v1.size();i++)
    {
       cout<<v1[i]<<" ";
    }

    cout<<"\n";

    vector<int>v2(5,7);
    v2.push_back(3);

    for(auto val: v2)
    {
        cout<<val<<" ";
    }
}

void test2()
{
    vector<int>v = {1,2,-1,4,5,6,-5,-10,11,44};
    for(auto it = v.begin();it!=v.end();)
    {
        if(*it<0)
        {
            it = v.erase(it);
        }else{
            it++;
        }
    }

    for(auto val : v)
    cout<<val<<" ";
}

void test3()
{
    vector<int> v { 3, -4, 7, -2, -1, 3, -5, 10, 3 };

    auto it = find(v.begin(),v.end(),-2);

    if(it!=v.end())
    {
        vector<int> v2{8,9,10};
        v.insert(it,v2.begin(),v2.end());
    }
    for(auto &val : v)
    {
        cout<<val<<" ";
    }
}
void test4() {
	vector<int> v { 3, -4, 7, -2, -1, 3, -5, 10, 3 };

	// Find is an algorithm. See algorithms video
	auto it = find(v.begin(), v.end(), -2);

	if (it != v.end()) {
		vector<int> v2 {8, 9, 10};
		v.insert(it, v2.begin(), v2.end());
	}
	// 3 -4 7 8 9 10 -2 -1 3 -5 10 3 
	for (auto &val : v)
		cout << val << " ";
}
int main()
{
    //test1();

    //test2();

    test3();
    cout<<"\n";
    test4();
}