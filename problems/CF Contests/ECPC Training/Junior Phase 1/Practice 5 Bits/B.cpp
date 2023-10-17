#include <bits/stdc++.h>

using namespace std;

int main() {
    int q, n; cin >> q >> n;
    while(q--) {
        int k, x; cin >> k >> x;
        if (k == 1) {
            if ((1 << x) & n) cout << 1;
            else cout << 0;
            cout << "\n";
            continue;
        }
        else if (k == 2) n |= (1 << x);
        else if (k == 3) n &= ~(1 << x);
        else n ^= (1 << x);
        cout << n << "\n";
    }
    return 0;
}