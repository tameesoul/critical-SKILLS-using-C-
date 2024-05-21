#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void ActivitySelectionProblem(vector<int>start,vector<int>end)
{
    int n=start.size();
    int j = 0;
    vector<int>selection;
    selection.push_back(0);
    for(int i = 1;i<n;i++) /// o(n)
    {
        if(start[i]>=end[j])
        {
            selection.push_back(i);
            j = i;
        }
    }

    for(int value : selection)
    {
        cout<<value<<" ";
    }
}

int main()
{
    vector<int>start ={9,10,11,12,13,15};
    vector<int>end = {11,11,12,14,15,16};
    ActivitySelectionProblem(start,end);
}
