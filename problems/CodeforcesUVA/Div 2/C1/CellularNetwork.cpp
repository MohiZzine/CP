#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll const INF = 1e11;

ll Min(ll a, ll b, ll c) {
    return min(min(a, b), c);
}
int main() {
    int n, m; scanf("%d%d", &n, &m);
    set<long long> cities,towers;
    long long ans = 0, bestDistance = 0;
    for (int i = 0; i < n; i++) {
        long long k; scanf("%lld", &k);
        cities.insert(k);
    }

    for (int j = 0; j < m; j++) {
        long long a; scanf("%lld", &a);
        towers.insert(a);
    }

    for (long long x: cities) {
        auto it = towers.lower_bound(x);
        if (it == towers.end()) {
            bestDistance = abs(*(--it) - x);
        } else if (it == towers.begin()){
            bestDistance = abs(*it - x);
        } else {
            long long a = abs(*it - x), b = abs(x - *(--it));
            bestDistance = min(a, b);
        }
        ans = max(bestDistance, ans);
    }

    printf("%lld", ans);
    return 0;
}