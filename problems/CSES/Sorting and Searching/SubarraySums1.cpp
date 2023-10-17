#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    scanf("%d%d", &n, &x);

    vector<long long> vect(n);

    for (int i = 0; i < n; ++i) {
        scanf("%lld", &vect[i]);
    }

    int l = 0, r = 0, sum = vect[0], ans = vect[0] == x ? 1: 0;
    while(r < n - 1) {
        if (sum + vect[r + 1] == x) ans++, sum += vect[++r];
        else if (sum + vect[r + 1] > x) sum -= vect[l++];
        else sum += vect[++r];
    }

    cout << ans << "\n";
    return 0;
}