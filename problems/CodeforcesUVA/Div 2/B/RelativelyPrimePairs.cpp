#include <bits/stdc++.h>

using namespace std;

int main() {
    long long lo, hi; cin >> lo >> hi;
    if (lo > hi) swap(lo, hi);
    cout << "YES\n";
    while(hi > lo) {
        cout << hi << " " << hi - 1 << "\n";
        hi -= 2;
    }
    return 0;
}