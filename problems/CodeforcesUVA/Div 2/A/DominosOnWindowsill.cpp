#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k1, k2; cin >> n >> k1 >> k2;
        int w, b; cin >> w >> b;
        if (2* w <= k1 + k2 && 2 * b <= n - k1 + n - k2) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}