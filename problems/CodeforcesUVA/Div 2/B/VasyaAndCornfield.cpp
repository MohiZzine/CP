#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d; cin >> n >> d;
    int m; cin >> m;

    while(m--) {
        int x, y; cin >> x >> y;
        if (x > n || x < 0 || y > n || y < 0) {
            cout << "NO\n";
            continue;
        }

        if ((x < d && y < d && x + y < d) || (x > d && y < n - d && y - x + d < 0) || (x > n - d && y > n - d && x + y + d - 2 * n > 0) || (x < n - d && y > d && y - x - d > 0)) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
    return 0;
}