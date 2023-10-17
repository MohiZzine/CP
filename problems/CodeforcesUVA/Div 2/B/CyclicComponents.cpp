#include <bits/stdc++.h>

using namespace std;

const int MAX = 2 * 1e5 + 5;
int n, m, num, edges, ans;

vector<vector<int>> adjList(MAX);
vector<vector<int>> comps(MAX);
vector<int> dfs_num(MAX, -1);

void dfs(int u) {
    comps[num].push_back(u);
    dfs_num[u] = 1;
    edges += adjList[u].size();
    for (int j = 0; j < adjList[u].size(); j++) {
        int v = adjList[u][j];
        if (dfs_num[v] == -1) {
            dfs(v);
        }
    }
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (dfs_num[i] == -1) {
            edges = 0;
            dfs(i);
            if (comps[num++].size() == edges / 2) ans++;
        }

    }

    cout << ans;

    return 0;
}