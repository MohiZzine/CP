#include <bits/stdc++.h>

using namespace std;

#define MOD (1000 * 1000 * 1000 + 7)
#define ll long long

ll binExp(__int128 a, __int128 n) {
    if (n == 0) return 1 % MOD;
    __int128 u = binExp(a, n / 2) % MOD;
    u = (u * u) % MOD;
    if (n & 1) u = (u * a) % MOD;
    return u % MOD;
}


int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b, n; cin >> a >> b >> n;
        printf("%lld\n", __gcd(binExp(a, n) + binExp(b, n), a - b)) % MOD;
    }
    return 0;
}