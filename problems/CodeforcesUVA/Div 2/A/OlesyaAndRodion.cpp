//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; cin >> n >> t;
    string s = "";
    if (n == 1  && t == 10) {
        cout << -1;
        return 0;
    }
    if (t == 10) n -= 2;
    else n--;
    s += to_string(t);
    for (int i = 0; i < n; i++)
        s +="0";
    cout << s;

    return 0;
}