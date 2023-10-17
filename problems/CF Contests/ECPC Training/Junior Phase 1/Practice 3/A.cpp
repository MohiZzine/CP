#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q; cin >> n >> q;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v.emplace_back(a, b);
    }

    sort(v.begin(), v.end());

    while(q--) {
        string c; cin >> c;
        int f, k; cin >> f >> k;
        pair<int, int> p = {f, k};
        if (c == "lower") {
            auto it = lower_bound(v.begin(), v.end(), p);
            if (it != v.end()) {
                if (*it == p) {
                    while(*it == p && it != v.end()) it++;
                    if (it == v.end()) cout << -1;
                } else cout << it - v.begin();
            } else cout << "-1";
        } else if (c == "upper") {
            auto it = upper_bound(v.begin(), v.end(), p);
            if (it != v.end()) {
                if (*it == p) {
                    if (it == v.begin()) cout << -1;
                } else cout << (--it) - v.begin();
            } else cout << "-1";
        } else {
            auto it = find(v.begin(), v.end(), p);
            if (it == v.end()) cout << "not found";
            else cout << "found";
            }
        cout << "\n";
    }

    return 0;
}