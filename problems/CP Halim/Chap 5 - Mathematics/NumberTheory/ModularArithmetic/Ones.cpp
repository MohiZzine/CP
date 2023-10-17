//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) == 1) {
        int ans = 1, i = 0, k = 1;
        while(k % n != 0) {
            ans++;
            k = k * 10 + 1;
            k %= n;
        }
        printf("%d\n", ans);
    }
    return 0;
}