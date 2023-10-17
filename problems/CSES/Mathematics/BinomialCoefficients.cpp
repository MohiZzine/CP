#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1000*1000 + 1;
long long fact[MAX], inv[MAX];

long long binExp(long long x, long long k) {
    if (k == 0) return 1;
    long long u = binExp(x, k / 2);
    u = (u * u) % MOD;
    if (k & 1) u = (u * x) % MOD;
    return u % MOD;
}

long long combi(int n, int k) {
    return fact[n] * inv[k] % MOD * inv[n - k] % MOD;
}

int main() {
    int n; cin >> n;
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) fact[i] = fact[i - 1] * i % MOD;
    inv[MAX - 1] = binExp(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 1;i >= 1; i--) inv[i - 1] = inv[i] * i % MOD;
    while(n--) {
        int a, b; cin >> a >> b;
        cout << combi(a, b) << "\n";
    }
    return 0;
}