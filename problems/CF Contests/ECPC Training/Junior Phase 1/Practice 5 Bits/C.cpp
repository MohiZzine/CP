#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q; cin >> n >> q;
    while(q--) {
        int k; cin >> k;
        if (k == 1) n |= (1 << __builtin_ctz(~n));
        else if (k == 2) n &= ~(1 << __builtin_ctz(n));
        else if (k == 3) {
            if (n == 0) n = -1;
            else {
                n |= (1 << __builtin_ctz(n)) - 1;
            }
        } else if (k == 4) {
            n &= ~((1 << __builtin_ctz(~n)) - 1);
        } else {
            if ((n & (n - 1)) == 0) cout << "is power of two";
            else cout << "not power of two";
            cout << "\n";
            continue;
        }
        cout << n << "\n";
    }
    return 0;
}