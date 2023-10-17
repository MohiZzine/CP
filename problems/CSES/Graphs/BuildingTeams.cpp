#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;
const int B = 1;
const int R = 2;
const int UNVIS = -1;

int n, m, c;
bool bipartite;

vector<vector<int>> adjList(MAX);
vector<int> dfs_num(MAX, UNVIS);

void dfs(int u) {
    for (int j = 0; j < adjList[u].size(); j++) {
        int v = adjList[u][j];
        if (dfs_num[v] == UNVIS) {
            dfs_num[v] = dfs_num[u] == B ? R: B;
            dfs(v);
        } else {
            if (dfs_num[v] == dfs_num[u]) {
                bipartite = false;
                return;
            }
        }
    }
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    c = B;
    bipartite = true;
    for (int i = 1; i <= n; i++) {
        if (dfs_num[i] == UNVIS) {
            dfs_num[i] = c;
            dfs(i);
        }
    }

    if (bipartite) {
        for (int i = 1; i <= n; i++) cout << dfs_num[i] << " ";
    } else cout << "IMPOSSIBLE";
    return 0;
}