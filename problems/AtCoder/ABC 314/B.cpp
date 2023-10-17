#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<unordered_set<int>> vset(n);
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        for (int j = 0; j < c; j++) {
            int k; cin >> k;
            vset[i].insert(k);
        }
    }

    int X, best = 110; cin >> X;
    map<int, vector<int>> winner;
    for (int k = 0; k < n; k++) {
        if (!vset[k].count(X)) continue;
        best = min((int)vset[k].size(), best);
        winner[vset[k].size()].push_back(k + 1);
    }

    cout << winner[best].size() << "\n";
    for (size_t i = 0; i < winner[best].size(); i++) {
        if (i) cout << " ";
        cout << winner[best][i];
    }
    return 0;
}