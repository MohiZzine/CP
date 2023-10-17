#include <bits/stdc++.h>

using namespace std;

const int MAX = 150005;
int n, m;
bool reasonable = true;
vector<vector<int>> adjList(MAX);
vector<int> dfs_num(MAX, -1);

void dfs(int u, int last) {
    dfs_num[u] = 1;
    for (int j = 0; j < adjList[u].size(); j++) {
        int v = adjList[u][j];
        if (last != 0 && last != v && find(adjList[v].begin(), adjList[v].end(), last) == adjList[v].end()) reasonable = false;
        if (dfs_num[v] == -1) {
            dfs(v, u);
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
            dfs(i, 0);
        }
    }

    if (reasonable) cout << "YES";
    else cout << "NO";

    return 0;
}