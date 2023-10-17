#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q; cin >> n >> q;
    int grid[n][n];
    memset(grid, 0, sizeof grid);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char k; cin >> k;
            grid[i][j] = (k == '*');
            if (i > 0) grid[i][j] += grid[i - 1][j];
            if (j > 0) grid[i][j] += grid[i][j - 1];
            if (i > 0 && j > 0) grid[i][j] -= grid[i - 1][j - 1];
        }
    }

    while(q--) {
        int x1, y1, y2, x2; cin >> x1 >> y1 >> x2 >> y2;
        --x1, --y1, --x2, --y2;
        int sum = grid[x2][y2] - ((x1 > 0) ? grid[x1 - 1][y2]: 0) - (y1 > 0 ? grid[x2][y1 - 1]: 0) + (x1 > 0 && y1 > 0 ? grid[x1 - 1][y1 - 1]: 0) ;
        cout << sum << "\n";
    }
    return 0;
}