//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
bool comp(pair<ll, ll> u, pair<ll, ll> v) {
    if (u.second == v.second) return u.first > v.first;
    return u.second > v.second;
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> vii;
    for (int i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        vii.push_back(make_pair(a, b));
    }

    sort(vii.begin(), vii.end(), comp);

    ll ans = 0, cum = 0;
    int i = 0;
    while(i < m && vii[i].first + cum <= n) {
        cum += vii[i].first;
        ans += vii[i].second * vii[i].first;
        i++;
    }
//    printf("%lld\n", ans);

    if (i < m)
        ans += (n - cum) * vii[i].second;
    printf("%lld", ans);
    return 0;
}