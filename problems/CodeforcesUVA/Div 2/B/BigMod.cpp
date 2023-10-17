//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll bigMod(ll a, ll b, ll c) {
    if (b == 0) return 1 % c;
    ll u = bigMod(a, b / 2, c) % c;
    u = (u * u) % c;
    if (b & 1) u *= a % c;
    return u % c;
}


int main() {
    ll B, P, M;
    while(scanf("%lld%lld%lld", &B, &P, &M) == 3) {
        ll result = bigMod(B, P, M);
        printf("%lld", result);
        printf("\n");
    }
    return 0;
}