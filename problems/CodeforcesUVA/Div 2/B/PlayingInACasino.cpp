#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, m; cin >>n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i =0; i < n; i++) for (int j = 0; j < m; j++) cin >> v[i][j];

        long long ans = 0;
        for (int i = 0; i < m; i++) {
            vector<long long> temp;
            long long sum = 0;
            for (int j = 0; j < n; j++) {
                temp.push_back(v[j][i]);
                sum += v[j][i];
            }

            long long cur = 0;
            sort(temp.begin(), temp.end());
            for (int j = 0; j < n; j++) {
                cur += temp[j];
                ans += llabs((sum - cur) - (n - 1 - j) * temp[j]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}