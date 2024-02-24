#include <iostream>

using namespace std;

int main() {
    string str; /// aabbee
    cin >> str;  
    str += "$";
    int group_Size = 1; /// 1 

    for (int i = 1; i < (int)str.size(); i++) {
        if (str[i - 1] != str[i]) { 
            if (i > 1) {
                cout << "_";
            }
            cout << str[i - 1] << group_Size;
            group_Size = 0;
        }
        ++group_Size; /// 2 
    }

    return 0;
}
