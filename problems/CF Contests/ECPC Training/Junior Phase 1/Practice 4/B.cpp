#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q; cin >> n >> q;
    map<string, long long> mp;
    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        int x; cin >> x;
        mp[name] = x;
    }

    while(q--) {
        int t; cin >> t;
        if (t == 1) {
            string name; cin >> name;
            int y; cin >> y;
            mp[name] += y;
        } else {
            string name; cin >> name;
            cout << mp[name] << "\n";
        }
    }
    return 0;
}