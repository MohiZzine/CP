#include <bits/stdc++.h>

using namespace std;

int main() {
    string l;
    bool opened = false;
    while(getline(cin, l)) {
        for (auto it = l.begin(); it != l.end(); it++) {
            if (*it == '\"') {
                if (!opened) {
                    opened = true;
                    cout << "``";
                } else {
                    opened = false;
                    cout << "''";
                }
            } else {
                cout << *it;
            }
        }
        cout << "\n";
    }
    return 0;
}