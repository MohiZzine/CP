//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll pgcd(ll a, ll b) {
    return b == 0 ? a: pgcd(b, a % b);
}

int main() {
    int step, mod, first = 1;
    while(scanf("%d%d", &step, &mod) == 2) {
        printf("%10d%10d", step, mod);
        if (pgcd(step, mod) != 1) {
            printf("    Bad Choice");
        } else {
            printf("    Good Choice");
        }
        printf("\n\n");
    }
    return 0;
}