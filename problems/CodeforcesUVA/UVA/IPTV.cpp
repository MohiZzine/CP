#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, m; cin >> n >> m;
        set<string> cities;
        map<pair<string, string>, int> links;
        for (int i = 0; i < m; i++) {
            string f, s; cin >> f >> s;
            if (!cities.count(f)) cities.insert(f);
            if (!cities.count(s)) cities.insert(s);
            int cost; cin >> cost;
            links[{f, s}] = cost;
        }

        int ans = 0;
        for (auto x: cities) {
            int link = MAX;
            for (auto p: links) {
                if (p.first.first == x || p.first.second == x) link = min(link, p.second);
            }
            ans += link;
        }
        cout << ans;

        if (tc) cout << "\n\n";
    }
    return 0;
}