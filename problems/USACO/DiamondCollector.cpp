#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int l = 0, r = 0, ans = 1;
    while(r < n - 1) {
        if (v[r + 1] - v[l] <= k) {
            r++;
            ans = max(r - l + 1, ans);
        } else {
            l++;
        }
    }
    cout << ans;
    freopen("diamond.out", "w", stdout);
    return 0;
}