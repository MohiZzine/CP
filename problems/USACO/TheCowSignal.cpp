#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k; cin >> m >> n >> k;
    char grid[m][n], new_grid[m * k][n * k];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    for (int i = 0; i < k * m; i++)
        for (int j = k * n - 1; j >= 0; j--)
            new_grid[i][j] = grid[i / k][j / k];

    for (int i = 0; i < k * m; i++) {
        for (int j = 0; j < k * n; j++) {
            cout << new_grid[i][j];
        }
        cout << endl;
    }

    return 0;
}