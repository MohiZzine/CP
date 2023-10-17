#include <bits/stdc++.h>

using namespace std;
const int MAX = 1000 * 100;

int main() {
    int n, m; cin >> n >> m;
    long long fact[MAX + 1];
    fact[0] = 1;
    for (int i = 1; i <= MAX; i++) fact[i] = (fact[i - 1] * i) % m;
//
//    long long der[MAX + 1];
//    der[1] = 0;
//    cout << der[1];
//    for (int i = 1; i <= n; i++) {
//        der[i + 1] = der[i] * i % m + ((i + 1) & 1 ? -1: +1);
//        cout << " " << der[i + 1] % m;
//    }
    return 0;
}