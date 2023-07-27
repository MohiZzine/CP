//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) { return b == 0 ? a: gcd(b, a % b); }

int main() {
    ll N;
    while(scanf("%lld", &N), N) {
        int num = 0, sq = sqrt(N), ans = 0;
        ll A[2000];
        for (int k = 1; k <= sq; k++) {
            if (N % k == 0) {
                A[num++] = k;
                if (k * k != N)
                    A[num++] = N / k;
            }
        }

        for (int i = 0; i < num; i++) {
            for (int j = i; j < num; j++) {
                if ((ll)A[i] * (A[j] / gcd(A[i], A[j])) == N)
                    ans++;
            }
        }
        printf("%lld %d\n", N, ans);
    }
    return 0;
}