#include <bits/stdc++.h>

using namespace std;

char n[11], r[11];

long long a, b;
int main() {

    while (scanf("%s", n) != EOF) {
        sort(n, n + strlen(n));
        int i = 0;
        while(n[i] == '0') i++;

        a = n[i] - '0';
        for (int j = 1; j <= i; j++) {
            a *= 10;
        }
        for (int j = i + 1; j < strlen(n); j++) {
            a *= 10;
            a += n[j] - '0';
        }
        reverse(n, n + strlen(n));
        b = n[0] - '0';
        for (int j = 1; j < strlen(n); j++) {
            b *= 10;
            b += n[j] - '0';
        }

        printf("%lld - %lld = %lld = 9 * %lld\n", b, a, b - a, (b - a) / 9);
    }
    return 0;
}