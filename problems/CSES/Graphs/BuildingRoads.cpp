#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;
const int UNVIS = -1;
const int VIS = 1;
int n, m, num_comp = 0;
vector<vector<int>> adjList(MAX);
vector<int> dfs_num(MAX, UNVIS);
vector<vector<int>> components(MAX);

void dfs(int x) {
    components[num_comp].push_back(x);
    dfs_num[x] = VIS;
    for (int j = 0; j < adjList[x].size(); j++) {
        int v = adjList[x][j];
        if (dfs_num[v] == UNVIS) {
            dfs(v);
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


    for (int i = 1; i <= n; i++) {
        if (dfs_num[i] == UNVIS) {
            dfs(i);
            num_comp++;
        }
    }

    cout << num_comp - 1 << "\n";
    for (int i = 0; i < num_comp - 1; i++) {
        cout << components[i][0] << " " << components[i + 1][0] << "\n";
    }

    return 0;
}