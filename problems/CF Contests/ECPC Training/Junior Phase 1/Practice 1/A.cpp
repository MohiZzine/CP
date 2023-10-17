#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;
    int n, q; cin >> n >> q;
    while(q--) {
        int z, x; cin >> z >> x;
        if (z == 1) mp[x]++;
        else cout << mp[x] << "\n";
    }
    return 0;
}