#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[55][55];
bool vis[55][55] = {false};
bool ok = false;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m;
}

void dfs(int r, int c, int prevx, int prevy) {
    if (!valid(r, c)) return;

    if (vis[r][c]) { ok = true; return; }

    vis[r][c] = true;

    for (int k = 0; k < 4; k++) {
        int x = r + dx[k];
        int y = c + dy[k];

        if (x == prevx && y == prevy) continue;

        if (grid[x][y] != grid[r][c]) continue;
        dfs(x, y, r, c);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> grid[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) {
                dfs(i, j, -2, -2);
                if (ok) {
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }

    cout << "No";

    return 0;
}