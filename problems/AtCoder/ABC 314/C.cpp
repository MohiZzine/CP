#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string s, new_string = ""; cin >> s;
    map<int, vector<char>> cols;
    vector<int> colors(n);
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        colors[i] = c;
        cols[c].push_back(s[i]);
    }

    for (auto x: cols) {
        rotate(x.second.begin(), x.second.begin() + x.second.size() - 1, x.second.end());
    }

    for (int i = 0; i < n; i++) {
        
    }
    return 0;
}