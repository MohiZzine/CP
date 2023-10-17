#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), res(m);
    vector<pair<int, int>> b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i].first, b[i].second = i;

    sort(begin(a), end(a));
    sort(begin(b), end(b), greater<pair<int, int>>());

    int j = 0, i = n - 1;
    while(j < m && i >= 0) {
        if (b[j].first >= a[i]) {
            res[b[j].second] = i + 1;
            j++;
        } else {
            i--;
        }
    }

    if (j < m) {
        while(j < m) res[b[j++].second] = 0;
    }

    for (int k = 0; k < m; k++) cout << res[k] << " ";
    return 0;
}