#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; scanf("%d%d", &n, &m);
    multiset<int> prices;
    vector<int> cust(m);
    for (int i = 0; i < n; ++i) {
        int k; scanf("%d", &k);
        prices.insert(k);
    }

    for (int i = 0; i < m; ++i) scanf("%d", &cust[i]);

    for (int j = 0; j < m; ++j) {
        auto it = prices.upper_bound(cust[j]);
        if (it != prices.begin()) {
            cout << *(--it) << "\n";
            prices.erase(it);
        }
        else cout << -1 << "\n";
    }
    return 0;
}