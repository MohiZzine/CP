#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    ll v[n], u[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i]; u[i] = v[i];
        if (i > 0) v[i] += v[i - 1];
    }
    sort(u, u + n);
    for (int i = 1; i < n; i++) u[i] += u[i - 1];
    int m; cin >> m;
    for (int j = 0; j < m; j++) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) {
            if (l > 1) cout << v[r - 1] - v[l - 2] << endl;
            else cout << v[r - 1] << endl;
        }
        if (t == 2) {
            if (l > 1) cout << u[r - 1] - u[l - 2] << endl;
            else cout << u[r - 1] << endl;
        }
    }
    return 0;
}