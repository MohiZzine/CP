#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long r, avg; cin >> r >> avg;
    long long sum = 0, ans = 0;

    vector<pair<long long, long long>> v;

    for (int i = 0; i < n; i++) {
        long long a, b; cin >> a >> b;
        v.emplace_back(b, a);
        sum += a;
    }

    sort(v.begin(), v.end());

    int i = 0;
    long long remain = avg * n - sum;
    while(remain > 0) {
        if (r - v[i].second >= 0) {
            ans += v[i].first * min(remain, r - v[i].second);
            remain -= r - v[i].second;
        }
        i++;
    }

    cout << ans;

    return 0;
}