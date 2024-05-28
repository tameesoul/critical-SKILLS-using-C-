#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int MAX = 10;
vector<string> labels = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
vector<vector<int>> data = {
    {0, 2, 4, 3, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 7, 4, 6, 0, 0, 0},
    {0, 0, 0, 0, 3, 2, 4, 0, 0, 0},
    {0, 0, 0, 0, 4, 1, 5, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 4, 0},
    {0, 0, 0, 0, 0, 0, 0, 6, 3, 0},
    {0, 0, 0, 0, 0, 0, 0, 3, 3, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

struct state {
    string from, to;
    int cost;
};

int main() {
    int n = data.size();
    vector<state> states(n);
    states[n - 1] = { labels[n - 1], "", 0 };

    for (int i = n - 2; i >= 0; i--) {
        states[i] = { labels[i], "", INT_MAX };
        for (int j = i + 1; j < n; j++) {
            if (data[i][j] == 0) continue;
            int newCost = data[i][j] + states[j].cost;
            if (newCost < states[i].cost) {
                states[i].cost = newCost;
                states[i].to = labels[j];
            }
        }
    }
    vector<string> path;
    int i = 0;
    while (i < n) {
        path.push_back(labels[i]);
        if (states[i].to == "") break;
        i = distance(labels.begin(), find(labels.begin(), labels.end(), states[i].to));
    }
    cout << "Minimum Cost: " << states[0].cost << endl;
    cout << "Minimum path: ";
    for (const string& node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
