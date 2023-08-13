//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, q; cin >> n >> p;
    bool solved[n];
    memset(solved, 0, sizeof(solved));
    for (int i = 0; i < p; i++) {
        int a; cin >> a;
        solved[--a] = true;
    }
   cin >> q;
    for (int i = 0; i < q; i++) {
        int a; cin >> a;
        solved[--a] = true;
    }

    bool won = true;
    for (int i = 0; i < n; i++)
        if (!solved[i]) won = false;
    if (won) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}