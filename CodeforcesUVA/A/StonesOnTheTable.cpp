//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0; cin >> n;
    string s; cin >> s;
    char c = s[0];
    if (n == 1) {
        printf("%d", ans); return 0;
    }
    for (int i = 1; i < n; i++) {
       if (s[i] == s[i - 1]) ans++;
    }
    printf("%d", ans);
    return 0;
}