#include <bits/stdc++.h>

using namespace std;

const int MAX = 2 * 1000000+ 1;

long long dp[MAX];

int main() {
    for (int i = 1; i < MAX; i++) dp[i] = i;
    for (int i = 2; i < MAX; i++) {
        if (dp[i] == i) {
            for (int j = i; j < MAX; j += i) dp[j] -= dp[j] / i;
        }
    }

    dp[1] = 0;
    for (int i = 2; i < MAX; i++) {
        dp[i] = dp[dp[i]] + 1;
    }

    for (int i = 2; i < MAX; i++) dp[i] += dp[i - 1];
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        cout << dp[b] - dp[a - 1] << "\n";
    }
    return 0;
}