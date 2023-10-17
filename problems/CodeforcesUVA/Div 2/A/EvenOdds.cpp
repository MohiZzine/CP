//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k; cin >> n >> k;
    if (k <= (n + 1)/ 2) {
        printf("%I64d", k * 2 - 1);
    } else {

        printf("%I64d", (k - (n + 1)/ 2) * 2);
    }
    return 0;
}