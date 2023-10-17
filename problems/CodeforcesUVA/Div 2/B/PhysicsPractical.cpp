#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    sort(begin(v), end(v));

    int l = 0, r = 0, best = 0;
    while(r < n - 1) {
        if (2 * v[l] >= v[r + 1]) {
            r++;
            best = max(best, r - l + 1);
        } else {
            l++;
        }
    }

    cout << n - best;

    return 0;
}