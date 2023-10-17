#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> v(n, 0);
    int ans = 0;

    while(m--) {
        int a, b, c; cin >> a >> b >> c;
        v[--a] += c;
        v[--b] -= c;
    }

    for (int i = 0; i < n; i++) {
        ans += (v[i] > 0 ? v[i]: 0);
    }

    cout << ans;

    return 0;
}