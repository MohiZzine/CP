//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < t.length(); i++) {
        if (s[ans] == t[i]) ans++;
    }
    printf("%d", ++ans);
    return 0;
}