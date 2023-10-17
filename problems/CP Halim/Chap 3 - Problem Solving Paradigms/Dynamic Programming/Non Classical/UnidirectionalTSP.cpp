#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> grid(150, vector<int>(150)), dp(150, vector<int>(150));
vector<int> minPath, path;

int minTSP(int row, int col) {
    if (col == 0) path.clear();
    if (col == m) return 0;
    if (row == n) row = 0;
    if (row == -1) row = n - 1;

    int path1 = minTSP(row, col + 1);
    int path2 = minTSP(row - 1, col + 1);
    int path3 = minTSP(row + 1, col + 1);

    int minCost = grid[row][col] + min(path1, min(path2, path3));

    path.push_back(row);

    if (minCost < dp[row][col]) {
        dp[row][col] = minCost;
    }
    return minCost;
}


int main() {
    while(scanf("%d%d", &n, &m) != EOF) {

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];

        int minCost = 100000000;
        for (int i = 0; i < m; i++) {
            int k;
            k = minTSP(i, 0);

            if (k < minCost) minCost = k, minPath = path;
        }

        reverse(minPath.begin(), minPath.end());

        for (int i = 0; i < minPath.size(); i++) {
            if (i) cout << " ";
            cout << minPath[i] + 1;
        }
        cout << "\n";

        cout << minCost << "\n";

        dp.clear();
        path.clear();
    }
    return 0;
}