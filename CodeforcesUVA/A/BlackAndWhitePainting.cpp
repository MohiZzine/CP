//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, c;
    while(scanf("%d %d %d", &n, &m, &c), n | m | c) {
        long long k = ((n - 7) * (m - 7));
        if (k % 2 != 0)
            if (c == 0)
                printf("%lld", k / 2);
            else
                printf("%lld", k / 2 + 1);
        else
            printf("%lld", k / 2);
        printf("\n");
    }
    return 0;
}