//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll memo[110][110];

ll comb(ll N, ll M) {
    if (N == M) return 1;
    if (memo[N][M] != -1) return memo[N][M];
    memo[N][M] = comb(N - 1, M - 1) + comb(N - 1, M);
    return memo[N][M];
}

int main() {
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i <= 100; i++)
        memo[i][0] = 1;
    ll N, M;
    while(scanf("%lld%lld", &N, &M), N | M) {
        ll result = comb(N, M);
        printf("%lld things taken %lld at a time is %lld exactly.\n", N, M, result);
    }
    return 0;
}