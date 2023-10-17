#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);

    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    int t = 0, i = 0;
    while(i < n) {
        int enter = max(v[i].first, t);
        t = enter + v[i].second;
        i++;
    }

    cout << t;
    return 0;
}