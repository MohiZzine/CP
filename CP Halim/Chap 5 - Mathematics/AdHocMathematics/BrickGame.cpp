//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int ans = 0, n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        nth_element(v.begin(), v.begin() + n/ 2, v.end());
        printf("Case %d: %d\n", i, v[n / 2]);
    }
    return 0;
}