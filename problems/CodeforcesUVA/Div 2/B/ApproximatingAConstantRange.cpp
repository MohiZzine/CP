#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i) v[i] -= v[i - 1];
    }

    int lo = 0, hi = 0, best = 1;
    v[0] = 0;

    while (hi < n - 1) {
        if ((v[hi] == v[hi + 1] && v[hi + 1] == 1) || (v[hi] == v[hi + 1]  && v[hi + 1] == -1)) {

        }
    }

    return 0;
}