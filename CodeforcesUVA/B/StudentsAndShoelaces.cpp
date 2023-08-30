//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int const VISITED = 1;
int const UNVISITED = -1;
vector<vector<int>> adjList(110);
vector<int> dfs_num(110);

//void dfs(int a) {
//    dfs_num[a] = VISITED;
//
//    for (int j = 0; j < adjList[a].size(); j++) {
//        int b = adjList[a][j];
//        if (dfs_num[b] == UNVISITED) dfs(b);
//    }
//}

int main() {
    int n, m, ans = 0; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    while(true) {
        set<int> s;
        for (int i = 1; i <= n; i++) {
            if (adjList[i].size() == 1) s.insert(i);
        }
        if (!s.empty()) {
            ans++;
            for (int i = 1; i <= n; i++) {
                if (s.count(i)) adjList[i].clear();
                for (int j = 0; j < adjList[i].size(); j++) {
                    if (s.count(adjList[i][j])) adjList[i].erase(adjList[i].begin() + j), j--;
                }
            }
        } else {
            break;
        }
    }

    cout << ans;

    return 0;
}