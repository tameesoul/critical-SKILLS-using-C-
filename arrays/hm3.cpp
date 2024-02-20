#include <iostream>
using namespace std;

int main() {
    int n, numbers[200];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; 
    }

    int min_1 = numbers[0], min_2 = numbers[1], min_3 = numbers[2];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < min_1) {
            min_3 = min_2;
            min_2 = min_1;
            min_1 = numbers[i];
        } else if (numbers[i] < min_2) {
            min_3 = min_2;
            min_2 = numbers[i];
        } else if (numbers[i] < min_3) {
            min_3 = numbers[i];
        }
    }

    cout << min_1 << " " << min_2 << " " << min_3;

    return 0;
}
