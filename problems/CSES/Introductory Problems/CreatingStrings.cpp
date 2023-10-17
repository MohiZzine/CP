#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1000 *1000 + 1;

long long binExp(int x, int k) {
    if (k == 0) return 1;
    long long u = binExp(x, k / 2);
    u = (u * u) % MOD;
    if (k & 1) u = (u * x) % MOD;
    return u % MOD;
}

int main() {
    long long fact[MAX], inv[MAX];
    fact[0] = 1;
    for (int i = 1; i < MAX;i++) fact[i]= (fact[i - 1] * i) % MOD;
    inv[MAX - 1] = binExp(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 1; i >= 2; i--) inv[i - 1] = (inv[i] * i) % MOD;
    string s; cin >> s;
    map<char, int> freq;
    for (int i = 0; i < s.size(); i++) freq[s[i]]++;
    long long ans = fact[s.size()];
    for (auto x: freq)  {
        ans = (ans * inv[x.second]) % MOD;
    }
    cout << ans;
    return 0;
}