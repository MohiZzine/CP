#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; cin >> q;
    while(q--) {
        int n, k; cin >> n >> k;
        cout << 2 * k - (k / n) << endl;
    }
    return 0;
}