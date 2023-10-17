#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> v[i].first;
        if (i % 2 == 0) v[i].second = 1;
        else v[i].second = 0;
    }

    sort(v.begin(), v.end());

    int ans = 0, cur = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (v[i].second == 1) cur++;
        else cur--;
        ans = max(cur, ans);
    }

    cout << ans;
    return 0;
}