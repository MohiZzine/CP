#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 2e6;

long long binExp(int x, int k) {
    if (k == 0) return 1;
    long long u = binExp(x, k / 2);
    u = (u * u) % MOD;
    if (k & 1) u = (u * x) % MOD;
    return u % MOD;
}


int main() {
    long long fact[MAX + 1], inv[MAX + 1];
    fact[0] = 1;
    for (int i = 1; i <= MAX; i++) fact[i] = (fact[i - 1] * i) % MOD;
    inv[MAX] = binExp(fact[MAX], MOD - 2);
    for (int i = MAX; i >= 1; i--) inv[i - 1] = (inv[i] * i) % MOD;
    int n, m; cin >> n >> m;
    cout << (((fact[m + n - 1] * inv[n - 1]) % MOD) * inv[m]) % MOD;
    return 0;
}