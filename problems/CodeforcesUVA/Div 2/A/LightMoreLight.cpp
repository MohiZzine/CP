//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    while(scanf("%lld", &n), n) {
        long long k = sqrt(n);
        if (k * k == n)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}