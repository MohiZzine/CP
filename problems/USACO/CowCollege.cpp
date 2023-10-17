#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("bcount.in", "r", stdin);
//    freopen("bcount.out", "w", stdout);
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        mp[a]++;
    }

    int other = 0, fee;
    long long best = -1;
    for (auto x: mp) {
        long long gain = x.first * (long long)(n - other);
        if (gain > best) {
            best = gain;
            fee = x.first;
        }
        other += x.second;
    }

    cout << best << " " << fee;
    return 0;
}