//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a: gcd(b, a % b);}

int main() {
    int k;
    while(scanf("%d", &k), k) {
        int n, A[1000], i, pgcd, j;
        cin >> A[0]; i = 1;
        pgcd = abs(A[0] - k);
        while(scanf("%d", &j), j)
            A[i++] = j;
        for (int t = 0; t < i - 1; t++) {
            pgcd = gcd(pgcd, abs(A[t + 1] - A[t]));
        }

//        for (int x = 1; x < i - 1; x++) {
//            pgcd = gcd(pgcd, abs(A[x + 1] - A[x]));
//            printf("The PGCD of %d and %d is: ", pgcd, A[x]);
//            pgcd = gcd(pgcd, A[x] - k);
//            printf("%d\n", pgcd);

//        while(scanf("%d", &A[i]), A[i]) {
//            printf("PGCD of %d and %d is: ", pgcd, A[i]);
//            pgcd = gcd(pgcd, A[i] - A[0]);
//            printf("%d\n", pgcd);
//            i++;
//        }
////        for (int k = 0; k < i; k++)
////            printf("Element #%d: %d\n", k + 1, A[k]);
//        printf("%d\n", pgcd > 0 ? pgcd: -pgcd);
//        printf("%d\n", pgcd > 0 ? pgcd: -pgcd);
        printf("%d\n", pgcd);
    }
    return 0;
}