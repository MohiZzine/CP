#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string s, x; cin >> s >> x;
        if (s.find(x) != string::npos) {
            cout << 0 << "\n";
            continue;
        }
        int i = 0;
        while(s.size() < x.size()) {
            s += s;
            i++;
        }
        if (s.find(x) != string::npos) {
            cout << i << "\n";
        } else cout << -1 << "\n";
    }
    return 0;
}