#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("convention.in", "r", stdin);
//    freopen("convention.out", "w", stdout);

    int n, m, c; cin >> n >> m >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int res = c * m - n;

    sort(v.begin(), v.end());
    int count = 0, best = 0;
    while(count < n) {
        best = max(v[min(count + c - 1, n - 1)] - v[count], best);
        count += c;
        if (count >= n) break;
    }
    printf("%d", best);
    return 0;
}