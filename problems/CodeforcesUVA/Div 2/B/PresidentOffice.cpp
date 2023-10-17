#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[110][110];
bool check(int i, int j, char c) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    return grid[i][j] != '.' && grid[i][j] != c;
}

int main() {
    char c;
    unordered_set<char> s;
    cin >> n >> m >> c;
    int x = n, y = m, X = -1, Y = -1;
    for (int i = 0;i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> grid[n - i - 1][j];
            if (grid[n - i - 1][j] == c) {
                x = min(x, n - i - 1);
                X = max(X, n - i - 1);
                y = min(y, j);
                Y = max(Y, j);
            }
        }

    for (int i = x; i <= X; i++)
        for (int j = y; j <= Y; j++) {
            if (check(i + 1, j, c)) s.insert(grid[i + 1][j]);
            if (check(i, j - 1, c)) s.insert(grid[i][j - 1]);
            if (check(i, j + 1, c)) s.insert(grid[i][j + 1]);
            if (check(i - 1, j, c)) s.insert(grid[i - 1][j]);
        }

    cout << s.size();
    return 0;
}