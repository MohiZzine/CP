#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
    long long fact[15];
    fact[0] = fact[1] = 1;
    for (int i = 2; i < 15; i++) fact[i] = fact[i - 1] * i;
    while(scanf("%d%d", &n, &k) != EOF) {
        long long ans = fact[n];
        while(k--) {
            int a; cin >> a;
            ans /= fact[a];
        }
        cout << ans << "\n";
    }
    return 0;
}