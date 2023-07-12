#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000000 + 7;


ll binomialCoeff(ll n, ll k) {
    if (k > n) return 0;
    if (memo[n][k] != -1) return memo[n][k];
    if (k == 0 || n == 0) return 1;
    memo[n][k] = (binomialCoeff(n-1, k - 1) % MOD) + binomialCoeff(n - 1, k) % MOD;
    return memo[n][k] % MOD;
}

int main() {
    ll memo[1000005][1000005];
    memset(memo, -1, sizeof memo);
    int TC; cin >> TC;
    while(TC--) {
        ll n, k; cin >> n >> k;
        cout << binomialCoeff(n, k) << "\n";
    }
    return 0;
}