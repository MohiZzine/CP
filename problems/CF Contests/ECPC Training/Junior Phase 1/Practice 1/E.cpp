#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q; cin >> n >> q;
    vector<long long> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    while(q--) {
        int l, r; cin >> l >> r;
        cout << v[r] - v[l - 1] << "\n";
    }
    return 0;
}