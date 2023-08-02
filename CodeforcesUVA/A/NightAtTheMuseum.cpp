//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int ans = 0;
    int r = s[0] - 'a';
    ans += min(abs(r - 0 - 26), abs(r - 0));
    printf("%d ", ans);
    for (int i = 1; i < s.length(); i++) {
        int k = s[i] - 'a';
        if (k - r >= 26)

        printf("%d ", min(abs(k - r - 26), abs(k - r)));
        ans += min(abs(k - r - 26), abs(k - r));
        r = k;
    }
    printf("\n%d", ans);
    return 0;
}