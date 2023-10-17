#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[1010][1010];
bool traversed[1010][1010];

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y) {
    if (grid[x][y] == '#' || traversed[x][y]) return;
    traversed[x][y] = true;
    if (valid(x + 1, y)) dfs(x + 1, y);
    if (valid(x, y + 1)) dfs(x, y + 1);
    if (valid(x - 1, y)) dfs(x - 1, y);
    if (valid(x, y - 1)) dfs(x, y - 1);
}

int main() {
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c; cin >> c;
            grid[n - i - 1][j] = c;
            if (c == '#') traversed[n - i - 1][j] = true;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m ;j++) {
            if (grid[i][j] == '.' && !traversed[i][j]) {
//                cout << i << " " << j << " ";
//                cout << grid[i][j] << endl;
                ans++;
                dfs(i, j);
            }
        }
    }

    printf("%d", ans);
    return 0;
}