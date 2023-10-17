//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc, cases = 1; cin >> tc;
    while(tc--) {
        int r, c, count = 0, most = -1, m, n; cin >> r >> c >> m >> n;
        long long ans = 0;
        map<char, int> mp;
        char ch;
        for (int i = 0; i < r * c && cin >> ch; i++) mp[ch]++;
        for (auto x: mp) {
            if (x.second > most) {
                count = 0;
                most = x.second;
            } else if (x.second == most) count++;
        }

        for (auto x: mp) {
            if (x.second == most) ans += m * x.second;
            else ans += n * x.second;
        }

        printf("Case %d: %lld\n", cases++, ans);
    }
    return 0;
}