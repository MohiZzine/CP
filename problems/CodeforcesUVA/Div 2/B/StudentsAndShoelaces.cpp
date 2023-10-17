#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adjList(n);
    set<int> deleted;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adjList[--a].push_back(b);
        adjList[--b].push_back(a);
    }

    int ans = 0;
    while(true) {
        bool changed = false;
        set<int> new_deleted;
        for (int i = 0; i < m && (!deleted.count(i)); i++) {
            if (adjList[i].size() == 1) {
                new_deleted.insert(i);
                changed = true;
            }
        }

        std::set_union(deleted.begin(), deleted.end(),)
        if (changed) continue;
        else break;
    }
    cout << ans << endl;
    return 0;
}