//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    bool odd = false;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a % 2 == 0) {
            cout << a / 2 << endl;
        } else {
            if (!odd) {
                cout << ceil((float)a / 2) << endl;
                odd = true;
            } else {
                cout << floor((float)a / 2) << endl;
                odd = false;
            }
        }
    }
    return 0;
}