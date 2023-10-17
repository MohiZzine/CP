//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

#define MIN -1;

vector<vector<int>> adjList(110);
vi units(110);
long long best;
int optimal;

void dfs_max(int u) {
    int largest = MIN;
    if (adjList[u].size() > 0) {
        for (int j = 0; j < adjList[u].size(); j++) {
            int v = adjList[u][j];
            if (units[v] > largest) optimal = v, largest = units[v];
        }
        best += units[optimal];
        dfs_max(optimal);
    }
    else return;
}

int main() {
    int t, cases = 1; cin >> t;
    while(t--) {
        best = 0;
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> units[i];
        }
        for (int i = 0; i < m; i++) {
            int u, v; cin >> u >> v;
            adjList[u].push_back(v);
        }

        dfs_max(0);
        printf("Case %d: %lld %d\n", cases++, best, optimal);
        for (int i = 0; i < n; i++) adjList[i].clear();
    }
    return 0;
}