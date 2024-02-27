#include<iostream>
using namespace std;
int main()
{
    bool is_prime [100][100] = {};
    int n , m , val;
    cin >> n >> m;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin >> val;


            if(val<=1)
            {
                is_prime[i][j] = 0;
            }
            is_prime[i][j] = 1;
            for(int k = 2; k<val;k++)
            {
                if(val % k == 0)
                {
                    is_prime[i][j] = 0;
                    break;
                }
            }
        }
    }
    int q , si , sj , rs, cls;
    cin >> q;

    while(q--)
    {
        cin >> si >> sj >> rs >> cls;
        int cnt = 0;

        for(int i = 0;i<si+sj-1;i++)
        {
            for(int j = 0; j<rs+cls-1;j++)
            {
                cnt +=is_prime[i][j];
            }
        }

        cout << cnt <<"\n";
    }
}
