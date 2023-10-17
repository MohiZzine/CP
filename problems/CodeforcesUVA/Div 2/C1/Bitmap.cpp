#include <bits/stdc++.h>

using namespace std;

int n, m;

const int INF = 10000;

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool vis[200][200];

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m)), dist(n, vector<int>(m, INF));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                char c; cin >> c;
                matrix[i][j] = c - '0';
            }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j]) {
                    queue<pair<int, int>> q;
                    q.emplace(i, j);
                    dist[i][j] = 0;

                    while(!q.empty()) {
                        int x = q.front().first, y = q.front().second;
                        q.pop();

                        for (int k = 0; k < 4; k++) {
                            int u = x + dx[k], v = y + dy[k];
                            if (valid(u, v) && dist[u][v] > dist[x][y] + 1) {
                                dist[u][v] = dist[x][y] + 1;
                                q.emplace(u, v);
                            }
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j) cout << " ";
                cout << dist[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}