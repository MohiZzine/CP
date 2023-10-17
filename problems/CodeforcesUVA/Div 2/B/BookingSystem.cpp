#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second) return p1.first < p2.first;
    return p1.second > p2.second;
}

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n), sol;

    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    int k; cin >> k;
    vector<int> tables(k);
    bool used[k];
    memset(used, 0, sizeof used);
    for (int i = 0; i < k; i++) {
        cin >> tables[i];
    }

    int acc = 0, cur = 0, total = 0;
    while(cur < n || acc < k) {
        pair<int, int> p = v[cur];
        auto it = lower_bound(begin(tables), end(tables), p.first);
        if (it == tables.end()) continue;
        int idx = it - tables.begin() + 1;
        while(idx < k && used[idx]) idx++;
        sol.emplace_back(cur + 1, idx), total += p.second, acc++, used[--idx] = true, acc++;
        cur++;
    }

    cout << acc << " " << total << "\n";
    for (int i = 0; i < sol.size(); i++)
        cout << sol[i].first << " " << sol[i].second << "\n";
    return 0;
}