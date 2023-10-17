#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    int n, m, k; cin >> n >> m >> k;
    vector<int> cows(n, -1), hierarchy;
    for (int i = 0; i < m; i++) {
        int a; cin >> a; hierarchy.push_back(a);
    }

    for (int i = 0; i < k; i++) {
        int c, p; cin >> c >> p;
        cows[--p] = c;
    }

    for (int i = 0; i < n; i++) {
        if (cows[i] != -1) continue;
        int next = i;
        while(cows[next] == -1) next++;
        int cow = cows[next];
        auto idx = find(hierarchy.begin(), hierarchy.end(), cow);
        if (idx == hierarchy.end()) {
            cout << ++i;
            return 0;
        } else {
            cows[i] = cow;
            hierarchy.erase(idx);
        }
    }

    return 0;
}