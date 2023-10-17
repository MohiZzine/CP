#include <bits/stdc++.h>

using namespace std;

typedef pair<long long, long long> ll;
bool comp(ll a, ll b) {
    return min(a.first * 2, a.second) + min(b.first, b.second)> min(b.first * 2, b.second) + min(a.first, a.second);
}

int main() {
    int n, f; cin >> n >> f;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), comp);

    long long int ans = 0;
    for (int i = 0; i < f; i++) {
        ans += min(v[i].first * 2, v[i].second);
    }
    for (int j = f; j < n; j++) {
        ans += min(v[j].first, v[j].second);
    }

    cout << ans;

    return 0;
}