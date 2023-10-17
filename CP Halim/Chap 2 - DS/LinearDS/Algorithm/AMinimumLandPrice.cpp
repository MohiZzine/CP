//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int const BUDGET = 1e6 * 5;

int const MAX = 1e7 + 10;

int main() {
    int t; cin >> t;
    while(t--) {
        vector<int> v(40, MAX);
        long long ans = 0;
        int p, i = 0, n = 1;
        while(scanf("%d", &p), p) v[i++] = p;
        sort(v.begin(), v.end());
        for (int j = i - 1; j >= 0; j--) {
            if (ans > BUDGET) break;
            ans += 2 * pow(v[j], n++);
        }
        if (ans > BUDGET) cout << "Too expensive";
        else cout << ans;
        cout << endl;
    }
    return 0;
}