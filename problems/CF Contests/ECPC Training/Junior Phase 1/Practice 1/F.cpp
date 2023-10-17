#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q; cin >> n >> q;
    vector<long long> v(n), pref(n, 0);

    for (int i = 0; i < n; i++) cin >> v[i];
    while(q--) {
        int l, r, val; cin >> l >> r >> val;
        pref[--l] += val;
        if (r < n) pref[r] -= val;
    }

    v[0] += pref[0];
    for (int i = 1; i < n; i++) {
        pref[i] += pref[i - 1];
        v[i] += pref[i];
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}