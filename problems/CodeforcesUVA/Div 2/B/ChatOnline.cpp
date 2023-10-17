#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, q, l, r; scanf("%d%d%d%d", &p, &q, &l, &r);
    vector<pair<int, int>> Z(p), X(q);

    int ans = 0;
    for (int i = 0; i < p; i++) cin >> Z[i].first >> Z[i].second;
    for (int i = 0; i < q; i++) cin >> X[i].first >> X[i].second;

    for (int i = l; i <= r; i++) {
        bool flag = false;
        for (auto Q: X) {
            if (flag) break;
            int c = Q.first, d = Q.second;
            for (auto P: Z) {
                if (flag) break;
                int a = P.first, b = P.second;
                if ((c + i >= a && c + i <= b) || (d + i >= a && d + i <= b) || (c + i <= a && d + i >= a) || (c + i <= b && d + i >= b)) ans++, flag = true;
            }
        }

    }
    printf("%d", ans);
    return 0;
}