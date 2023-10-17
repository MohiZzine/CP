#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    while(getline(cin, s)) {
        for (auto it = s.begin(); it != s.end(); it++) {
            cout << (char)(*it - 7);
        }
        cout << "\n";
    }
    return 0;
}