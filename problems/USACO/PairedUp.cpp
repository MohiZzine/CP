#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);

    int n;
    scanf("%d", &n);

    vector<long long> cows;
    for (int i = 0; i < n; i++) {
        long long x, y; scanf("%lld%lld", &x, &y);
        for (int j = 0; j < x; j++) cows.push_back(y);
    }

    sort(cows.begin(), cows.end());

    long long best = 0, N = cows.size();
    for (int i = 0; i < N / 2; i++) {
        best = max(cows[i] + cows[n - i - 1], best);
    }

    cout << best;
    return 0;
}