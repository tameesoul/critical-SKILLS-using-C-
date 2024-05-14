#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool is_valid(vector<string>&str)
{
    bool is_valid = false;
    for(int i = 0 ; (int)i<str.size();i++)
    {
        if(str[i] == str[str.size()-i-1])
        {
            is_valid = true;
        }
    }
    return is_valid;
}
int main()
{
    vector<string> str {"({"};
    cout<<is_valid(str);
}