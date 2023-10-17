#include <bits/stdc++.h>

using namespace std;

int main() {
    long long l, r, m; cin >> l >> r >> m;
    unsigned long long res = 1, i = l;
    while(i <= r) {
        res = (res * i) % m;
        i++;
    }

    cout << res;
    return 0;
}