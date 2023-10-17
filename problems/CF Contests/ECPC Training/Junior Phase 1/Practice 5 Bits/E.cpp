#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int mask = 0; mask < (1 << n); mask++) {
        int even = 0, tot = 0;
        for (int j = 0; j < n; j++) {
            if (((1 << j) & mask)) {
                tot++;
                if (v[j] % 2 == 0) even++;
            }
        }

        if (even > tot - even) ans++;
    }

    cout << ans;
    return 0;
}