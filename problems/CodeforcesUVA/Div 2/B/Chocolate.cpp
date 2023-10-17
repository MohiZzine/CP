#include <bits/stdc++.h>

using namespace std;

long long fact[101];

int main() {
    fact[0] = fact[1] = 1;
    for (int i = 2; i < 101; i++) {
        fact[i] = fact[i - 1] * i;
    }

    int n; cin >> n;
    int delimiters = 0, ones = 0;
    vector<int> v(n), onesIdx;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i]) ones++, onesIdx.push_back(i);

    }

    long long ans = 1;

    if (onesIdx.empty()) {
        cout << 0;
        return 0;
    }
    for (int i = 1; i < onesIdx.size(); i++) {
        ans *= (onesIdx[i] - onesIdx[i - 1]);
    }
    cout << ans;

    return 0;
}