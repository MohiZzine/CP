#include <bits/stdc++.h>

using namespace std;

int const MOD = 1e9 + 7;
int n, tot, dp[1010][1010];
char grid[1010][1010];

bool valid(int r, int c) {
    return r <= n - 1 && c <= n - 1 && grid[r][c] != '*';
}

int allPaths(int r, int c) {
    if (!valid(r, c)) return 0;
    if (dp[r][c] != -1) return dp[r][c];

    if (r == n - 1 && c == n - 1) return 1;

    int p1 = allPaths(r, c + 1) % MOD;
    int p2 = allPaths(r + 1, c) % MOD;

    return dp[r][c] = (p1 + p2) % MOD;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
        cin >> grid[i][j];

    memset(dp, -1, sizeof(dp));

    cout << allPaths(0, 0);

    return 0;
}