//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int const MAX = 1e6 + 10;
vector<vector<int>> nums(MAX);

int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        for (int i = 1; i <= n; i++) {
            int t; cin >> t;
            nums[t].push_back(i);
        }

        for (int j = 1; j <= m; j++) {
            int k, v; cin >> k >> v;
            if (nums[v].size() < k) cout << 0 << endl;
            else cout << nums[v][k - 1] << endl;
        }
        nums.clear();
    }
    return 0;
}