//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int k; cin >> k;
    for (int i = 1; i <= k; ++i) {
        ll a1 = i*i, a2 = i*i - 1;
        ll ans = (a1 * a2) / 2 - 4 * (i - 1) * (i - 2);
//        ll ans = (i*i * (i*i - 1)) / 2 - 4 * (i - 1) * (i - 2);
        cout << ans << endl;
    }

    return 0;
}