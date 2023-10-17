#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long exp(long long x, long long k) {
    if (k == 0) return 1;
    long long u = exp(x, k / 2) % MOD;
    u = (u * u) % MOD;
    if (k & 1) u = (u * x) % MOD;
    return u % MOD;
}

int main() {
    int t; cin >> t;
    for (int k = 1; k <= t; k++) {
        long long n; cin >> n;
        printf("Case #%d: %lld\n", k, n * exp(2, n - 1) % MOD);
    }
    return 0;
}