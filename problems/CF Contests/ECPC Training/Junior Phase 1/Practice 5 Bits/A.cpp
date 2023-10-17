#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q; cin >> q >> n;
    while(q--) {
        int k; cin >> k;
        if (k == 4) n = ~n;
        else {
            int x; cin >> x;
            if (k == 1) n |= x;
            if (k == 2) n &= x;
            if (k == 3) n ^= x;
        }
        cout << n << "\n";
    }

    return 0;
}