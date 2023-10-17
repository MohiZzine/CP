#include <bits/stdc++.h>

using namespace std;


const int MAX = 1e5 + 5;
const int INF = 1e9 + 5;
int n, m;
long long ans, k;

vector<vector<int>> adjList(MAX);
vector<int> dfs_num(MAX, -1);
vector<long long> c(MAX);

void dfs(int u) {
    dfs_num[u] = 1;
    k = min(k, c[u]);
    for (int j = 0; j < adjList[u].size(); j++) {
        int v = adjList[u][j];
        if (dfs_num[v] == -1) {
            dfs(v);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> c[i];

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        k = INF;
        if (dfs_num[i] == -1) {
            dfs(i);
        }
        ans += k == INF ? 0: k;
    }


    cout << ans;

    return 0;
}