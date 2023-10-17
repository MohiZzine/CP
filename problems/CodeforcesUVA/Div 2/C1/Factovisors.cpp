#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a: gcd(b, a % b);
}

int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        int div = 2, initial = m;
        while(m > 1 && div <= n) {
            if (gcd(m, div) > 1) m /= gcd(m, div);
            div++;
        }
        if (m == 1) printf("%d divides %d!\n", initial, n);
        else printf("%d does not divide %d!\n", initial, n);
    }

    return 0;
}