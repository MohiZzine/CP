#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d; cin >> n >> d;
    vector<pair<long long, long long>> v(n);

    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(begin(v), end(v));

    int l = 0, r = 0;
    long long best = v[0].second, cur = best;

    while(r < n - 1) {
        if (v[r + 1].first - v[l].first < d) {
            r++;
            cur += v[r].second;
            best = max(best, cur);
        } else {
            cur -= v[l].second;
            l++;
        }
    }

    if (v[n - 1].second > best) best = v[n - 1].second;
    cout << best;
    return 0;
}