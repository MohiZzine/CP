#include <bits/stdc++.h>

using namespace std;

const int MAX = 100010;
const int INF = 1e9 + 5;
vector<vector<int>> adjList(MAX);

vector<int> par(MAX, -1);
vector<int> d(MAX, INF);
queue<int> q;

int main() {
    int n, m; scanf("%d%d", &n, &m);

    for (int i = 0; i < m; i++) {
        int a, b; scanf("%d%d", &a, &b);
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int ans = 0;
    q.push(1);
    d[1] = 0;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for (int j = 0; j < adjList[u].size(); j++) {
            int v = adjList[u][j];
            if (d[v] == INF) {
                d[v] = d[u] + 1;
                q.push(v);
                par[v] = u;
            }
            if (v == n) break;
        }
        ans++;
    }

    if (d[n] == INF) printf("IMPOSSIBLE");
    else {
        printf("%d\n", d[n] + 1);
        vector<int> path(MAX);
        int last = n;
        while(last != -1) {
            path.push_back(last);
            last = par[last];
        }
        reverse(path.begin(), path.end());
        for (int i = 0; i < d[n] + 1; i++) {
            printf("%d ", path[i]);
        }
    }
    return 0;
}