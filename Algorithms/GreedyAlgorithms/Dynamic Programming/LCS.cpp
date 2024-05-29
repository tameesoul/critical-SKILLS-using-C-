#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string text_0 = "HELLOWORLD";
    string text_1 = "OHELOD";
    int rows = text_1.length();
    int cols = text_0.length();
    vector<vector<int>> DP(rows + 1, vector<int>(cols + 1, 0));

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= cols; j++)
        {
            if(text_1[i-1] == text_0[j-1])
            {
                DP[i][j] = 1 + DP[i-1][j-1];
            }
            else
            {
                DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
            }
        }
    }

    int lcs_length = DP[rows][cols];
        string lcs_string = "";
    int i = rows, j = cols;
    while(i > 0 && j > 0)
    {
        if(text_1[i-1] == text_0[j-1])
        {
            lcs_string += text_1[i-1];
            i--;
            j--;
        }
        else if(DP[i-1][j] > DP[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(lcs_string.begin(), lcs_string.end());

    cout << "Length of LCS: " << lcs_length << "\n";
    cout << "LCS: " << lcs_string << "\n";

    return 0;
}
