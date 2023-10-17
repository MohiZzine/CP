//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

#define INF 100000000;

int main() {
    int n, k; cin >> n >> k;
    vector<priority_queue<int, vector<int>, greater<int>>> v(n);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        for (int j = 0;j < m; j++) {
            int a; cin >> a;
            v[i].push(a);
        }
    }

    while(k--) {
        int MIN = INF;
        for (int i = 0; i < n; i++) {
            if (v[i].size() == 0) continue;
            if (MIN > v[i].top()) {
                MIN = v[i].top(); v[i].pop();
            }
        }
        ans += MIN;
    }

    cout << ans;
    return 0;
}