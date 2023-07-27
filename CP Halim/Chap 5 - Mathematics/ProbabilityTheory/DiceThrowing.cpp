//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int n, x;
ll res[25][150];

ll solve(int n, int score) {
    if (n == 0) {
        if (score >= x) {
            return 1;
        } else return 0;
    }
    if (res[n][score] != -1) return res[n][score];
    ll ans = 0;
    for (int i = 1; i <= 6; i++)
        ans += solve(n - 1, score + i);
    return res[n][score] = ans;
}

ll gcd(ll a, ll b) { return b == 0 ? a: gcd(b, a % b);}

int main() {
    ll space, event, esgcd;
    while(scanf("%d %d", &n, &x), n || x) {
       memset(res, -1, sizeof(res));
        space = pow(6.0, n);
        event = solve(n, 0);

        esgcd = gcd(space, event);
        event = event / esgcd;
        space = space / esgcd;

        if (event == 0)
            printf("0\n");
        else if (space == 1)
            printf("%llu\n", event);
        else
            printf("%llu/%llu\n", event, space);
    }
    return 0;
}