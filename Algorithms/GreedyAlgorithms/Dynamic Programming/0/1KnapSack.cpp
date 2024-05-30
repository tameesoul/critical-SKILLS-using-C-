#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct item {
    string name;
    int weight;
    int profit;
};

int KnapSack(vector<item> &items, int max_weight, vector<vector<int>> &dp, vector<string> &solution) {
    items.insert(items.begin(), {"#0", 0, 0});
    int n = items.size();
    dp.resize(n, vector<int>(max_weight + 1, 0));

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= max_weight; j++) {
            if (items[i].weight <= j) {
                dp[i][j] = max(dp[i-1][j], items[i].profit + dp[i-1][j - items[i].weight]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    //  the solution set
    int w = max_weight;
    for (int i = n - 1; i > 0 && w > 0; i--) {
        if (dp[i][w] != dp[i-1][w]) {
            solution.push_back(items[i].name);
            w -= items[i].weight;
        }
    }

    return dp[n-1][max_weight];
}

int main() {
    vector<item> items = { {"#1", 1, 4}, {"#2", 3, 9}, {"#3", 5, 12}, {"#4", 4, 11} };
    int max_weight = 8;
    vector<vector<int>> dp;
    vector<string> solution;

    int max_profit = KnapSack(items, max_weight, dp, solution);

    cout << "Maximum Profit: " << max_profit << endl;
    cout << "Items included: ";
    for (const string &name : solution) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
