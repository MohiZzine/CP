#include <bits/stdc++.h>

using namespace std;

int n, x, h[1010], s[1010], dp[1000010], sum = 0;

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> h[i], sum += h[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        for (int j = sum; j - h[i] >= 0; j--) {
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }

    cout << dp[x];
    return 0;
}