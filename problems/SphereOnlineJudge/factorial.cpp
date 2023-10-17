//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        long long k; cin >> k;
        int ans = 0;
        while(k) {
            ans += k / 5;
            k /= 5;
        }
        printf("%d\n", ans);
    }
    return 0;
}