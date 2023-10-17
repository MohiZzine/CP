#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    bitset<31> bitsets[n];
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        bitset<31> bs(s);
        bitsets[i] = bs;
    }

    size_t ans = k;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, (bitsets[i] ^ bitsets[j]).count());
        }
    }

    cout << ans;
    return 0;
}