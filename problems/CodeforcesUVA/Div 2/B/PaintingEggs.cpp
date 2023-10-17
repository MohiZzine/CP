#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

//    sort(begin(v), end(v));

    int sA = 0, sG = 0;
    string sol = "";
    for (int i = 0; i < n; i++) {
        int opt1 = sA + v[i].first - sG, opt2 = sG + v[i].second - sA;
        if (abs(opt1) > abs(opt2)) {
            sG += v[i].second;
            sol += 'G';
        } else {
            sA += v[i].first;
            sol += 'A';
        }
    }

    if (abs(sA - sG) > 500) {
        cout << -1 << endl;
    } else {
        cout << sol;
    }
    return 0;
}