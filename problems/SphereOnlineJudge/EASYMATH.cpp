//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) { return b == 0 ? a: gcd(b, a % b); }

ll lcm(ll a, ll b) { return a * (b / gcd(a, b));}

ll lcmOfFive(ll a, ll b, ll c, ll d, ll e) {
    return lcm(e, lcm(d, lcm(c, lcm(b, a)))),
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, m, a, d; cin >> n >> m >> a >> d;
        ll p = lcmOfFive(a, a + d, a + 2*d, a + 3*d, a + 4*d);
        long long count = 0;
        for (int i = n; i <= m; i++) {
            if (i % p == 0) count++;
        }

    }
    return 0;
}