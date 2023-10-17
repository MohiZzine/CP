#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000 * 1000;

int main() {
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = 0, best = MAX, cur = v[0];
    while(r < n - 1) {
        if (cur + v[r + 1] >= m) {
            cur -= v[l];
            l++;
        } else {
            r++;
            cur += v[r];
            best = min(best, r - l + 1);
        }
    }

    if (v[n - 1] >= m) best = 1;
    cout << best;
    return 0;
}