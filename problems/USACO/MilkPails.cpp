#include <bits/stdc++.h>

using namespace std;

int x, y, m, ans = 0;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    cin >> x >> y >> m;
    int ans = 0;

    for (int first = 0; first <= m; first++) {
        if (first * x > m) break;
        for (int second = 0; second <= m; second++) {
            int n = first * x + second * y;
            if (n > m) break;
            ans = max(ans, n);
        }
    }

    cout << ans;
    return 0;
}