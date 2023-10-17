//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int const VISITED = 1, UNVISITED = -1;
typedef vector<int> vi;

vector<vi> adjList(105);
vi dfs_num(105);
int n;

void dfs(int u) {
    for (int i = 0; i < adjList[u].size(); i++) {
        int v = adjList[u][i];
        if (dfs_num[v] == UNVISITED) { dfs_num[v] = VISITED; dfs(v);  }
    }
}

int main() {
    while(scanf("%d", &n), n) {
        dfs_num.assign(105, UNVISITED);
        int count = 0;
        int u;
        while(scanf("%d", &u), u) {
            int k;
            while(scanf("%d", &k), k) {
                adjList[u].push_back(k);
            }
        }
        int num; cin >> num;
        for (int i = 0; i < num; i++) {
            set<int> inacc;
            int k; cin >> k;
            dfs(k);
            for (int j = 1; j <= n; j++) {
                if (dfs_num[j] == UNVISITED) {
                    inacc.insert(j);
                    //cout << "inserina "<< j <<endl;
                    count++;
                }
            }
            cout << count;
            for (int x: inacc) {
                cout << " " << x;
            }
            cout << endl;
            dfs_num.assign(105, UNVISITED), count = 0;
        }
        for(int i = 1; i <= n; i++) adjList[i].clear();
    }
    return 0;
}