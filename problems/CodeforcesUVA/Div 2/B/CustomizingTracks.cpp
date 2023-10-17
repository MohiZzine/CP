#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        long long ans = 0;
        for (int i = 0; i < n; i++) cin >> v[i], ans = (ans + v[i]) % n;
        ans *= (n - ans);
        cout << ans << "\n";
    }
    return 0;
}