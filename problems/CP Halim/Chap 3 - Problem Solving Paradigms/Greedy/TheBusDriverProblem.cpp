#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, r;
    while(scanf("%d%d%d", &n, &d, &r), n | r | d) {
        int m[n], e[n];
        for (int i = 0; i < n; i++)
            cin >> m[i];

        for (int i= 0; i < n; i++)
            cin >> e[i];

        sort(m, m + n);
        sort(e, e + n);

        long long amount = 0;
        for (int i = 0; i < n; i++) {
            if (m[i] + e[n - i - 1] > d) {
                long long p = r * (-d + m[i] + e[n - i - 1]);
                amount += p;
            }
        }

        printf("%lld\n", amount);
    }
    return 0;
}