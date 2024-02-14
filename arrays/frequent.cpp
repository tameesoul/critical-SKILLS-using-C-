#include<iostream>
using namespace std;

int main()
{
    int n , numbers[200];
    cin>>n; /// 5
    int freqeunt[150+1] = {0}; /// {0,0,0.......}
    for(int i = 0;i<n;i++) /// 0 , 0<5
    {
        cin>>numbers[i]; /// {1,1}
        freqeunt[numbers[i]]++; /// [1]++ {0,2 , }
    }

    int max_pos = freqeunt[0];
    for(int i = 1;i<151;i++)
    {
        if(freqeunt[i]>max_pos)
        {
           max_pos = i; 
        }
    }
    cout<<max_pos<<" " <<freqeunt[max_pos];
}