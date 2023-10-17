#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long x; cin >> x;
    vector<long long> v(n / 2), w((n & 1) ? (n + 1) / 2: n / 2);
    for (int i = 0; i < v.size(); i++) cin >> v[i];
    for (int i = 0; i < w.size(); i++) cin >> w[i];

    vector<long long> f, s;

    for (int mask = 0; mask < (1 << v.size()); mask++) {
        long long sum = 0;
        for (int k = 0; k < v.size(); k++) {
            if (mask & (1 << k)) sum += v[k];
        }
        f.push_back(sum);
    }


    for (int mask = 0; mask < (1 << w.size()); mask++) {
        long long sum = 0;
        for (int k = 0; k < w.size(); k++) {
            if (mask & (1 << k)) sum += w[k];
        }
        s.push_back(sum);
    }

    int ans = 0;

    for (int i = 0; i < f.size(); i++) {
        for (int j = 0; j < s.size(); j++)

            if (f[i] + s[j] == x) ans++;
    }

    cout << ans;
    return 0;
}