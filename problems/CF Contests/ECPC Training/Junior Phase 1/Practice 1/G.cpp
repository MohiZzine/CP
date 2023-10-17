#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, q; cin >> n >> m >> q;
    long long matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (i > 0) matrix[i][j] += matrix[i - 1][j];
            if (j > 0) matrix[i][j] += matrix[i][j - 1];
            if (i > 0 && j > 0) matrix[i][j] -= matrix[i - 1][j - 1];
        }
    }

    while(q--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1--; x2--; y1--; y2--;
        long long ans = matrix[x2][y2];
        if (x1 > 0) ans -= matrix[x1 - 1][y2];
        if (y1 > 0) ans -= matrix[x2][y1 - 1];
        if (x1 > 0 && y1 > 0) ans += matrix[x1 - 1][y1 - 1];
        cout << ans << "\n";
    }
    return 0;
}