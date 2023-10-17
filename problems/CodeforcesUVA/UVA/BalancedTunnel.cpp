#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<pair<int, int>> b(n);

    for (int i = 1; i <= n; i++) {
        int k; cin >> k;
        a[k] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = a[b[i].first];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i + 1 < b[i].second) ans++;
    }

    cout << ans;
    return 0;
}