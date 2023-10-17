#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        mp[k]++;
    }
    for (auto x: mp) {
        for (int i = 0; i < x.second; i++) cout << x.first << " ";
    }
    return 0;
}