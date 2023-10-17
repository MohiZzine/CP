#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int m; cin >> m;
        vector<pair<int, int>> v;
        int l, r;
        while(cin >> l >> r) {
            if (l != 0 || r != 0) {
                pair<int, int> p = {l, r};
                v.push_back(p);
            }
        }

    }
    return 0;
}