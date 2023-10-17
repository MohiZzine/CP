#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.first == b.first) return a.second >= b.second;
    return a.first <= b.first;
}

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    long long t = 0, re = 0;
    for (int i = 0; i < n; i++) {
        t += v[i].first;
        re += (v[i].second - t);
    }

    cout << re;
    return 0;
}