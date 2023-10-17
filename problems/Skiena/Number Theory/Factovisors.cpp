#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        if (m == 1) {
            printf("1 divides %d\n", n);
            continue;
        }
        int i = 2, tmp = m;
        while(tmp > 1 && i <= n) {
            if (gcd(i, tmp) > 1) {
                tmp /= gcd(i, tmp);
            }
            i++;
        }
        if (tmp <= 1) printf("%d divides %d!\n", m, n);
        else printf("%d does not divide %d!\n", m, n);
    }
    return 0;
}