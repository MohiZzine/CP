#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3;
long long binom[MAX + 1][MAX + 1];
long long derang[MAX + 1];

int main() {
    for (int i = 0; i <= MAX; i++) binom[i][0] = 1, binom[i][i] = 1;
    for (int i = 0; i <= MAX; i++) {
        for (int j = 1; j <= i; j++) {
            binom[i][j] = binom[i - 1][j] + binom[i - 1][j - 1];
        }
    }
    derang[0] = 1;
    derang[1] = 0;
    for (int i = 2; i <= MAX; i++) derang[i] = (i - 1) * (derang[i - 1] + derang[i - 2]);
    int n, k; cin >> n >> k;
    long long ans = 0;
    while(k > 1) {
        ans += derang[k] * binom[n][n - k];
        k--;
    }
    cout << ++ans;
    return 0;
}