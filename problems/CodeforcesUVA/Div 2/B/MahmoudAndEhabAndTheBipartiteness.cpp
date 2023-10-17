#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;
const int B = 1;
const int R = 2;
const int UNV = -1;
int n, ans, c;
vector<vector<int>> adjList(MAX);
vector<vector<int>> indep(2);
vector<int> dfs_num(MAX, UNV);

void dfs(int u) {
    for (int j = 0; j < adjList[u].size(); j++) {
        int v = adjList[u][j];
        if (dfs_num[v] == UNV) {
            dfs_num[v] = dfs_num[u] == B ? R: B;
            if (dfs_num[v] == 1) indep[0].push_back(v);
            else indep[1].push_back(v);
            dfs(v);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    c = B;
    for (int i = 1; i <= n; i++) {
        if (dfs_num[i] == UNV) {
            dfs(i);
            dfs_num[i] = c;
        }
    }

    cout << indep[0].size() * indep[1].size() - n + 1;

    return 0;
}