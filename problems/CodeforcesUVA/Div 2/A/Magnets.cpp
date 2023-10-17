//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 1; cin >> n;
    string f; cin >> f;
    if (n == 1) {
        printf("1");
        return 0;
    }
    for (int i = 1; i < n; i++) {
        string s; cin >> s;
        if (s != f) ans++;
        f = s;
    }

    printf("%d", ans);

    return 0;
}