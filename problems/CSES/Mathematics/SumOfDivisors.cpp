#include <bits/stdc++.h>

using namespace std;

int const MOD = 1e9 + 7;


vector<long long> v(1000000);
map<long long, int> mp;
long long modK(int x, int k) {
    if (k == 0) return 1 % MOD;
    int u = modK(x, k / 2);
    u = (u * u) % MOD;
    if (k & 1) u = (u * x) % MOD;
    return u % MOD;
}

void divisors(long long n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while(n % i == 0) mp[i]++, n /= i;
        }
    }

    if (n > 1) mp[n]++;
}

int main() {
    long long n; cin >> n;
    divisors(n);
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += (n / i) * i;
        ans %= MOD;
    }

    printf("%lld", ans);
    return 0;
}