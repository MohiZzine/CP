#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long binExp(long long a, long long k) {
    if (k == 0) return 1;
    long long u = binExp(a, k / 2) % MOD;
    u = (u * u) % MOD;
    if (k & 1) u = (u * a) % MOD;
    return u % MOD;
}

int n;
long long N;
map<long long, long long> factors;

long long num_divs() {
    long long prod = 1;
    for (auto x: factors) {
        prod = (prod * (x.second + 1)) % MOD;
    }
    return prod;
}

long long sum_divs() {
    long long prod = 1;
    for (auto x: factors) {
        prod = (prod * ((binExp(x.first, x.second + 1) - 1) * (binExp(x.first - 1, MOD - 2))) % MOD) % MOD;
    }
    return prod;
}

long long prod_divs(long long k) {
    if (k & 1) return (binExp(N, k / 2) * (long long)sqrt(N)) % MOD;
    return binExp(N, k / 2) % MOD;
}

int main() {
    cin >> n;
    N = 1;
    for (int i = 0; i < n; i++) {
        long long p, e; cin >> p >> e;
        factors[p] = e;
        N = (N * binExp(p, e)) % MOD;
    }

    long long num = num_divs();

    printf("%lld %lld %lld", num_divs(), sum_divs(), prod_divs(num));

    return 0;
}