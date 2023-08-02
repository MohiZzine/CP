//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    while(n--) {
        int a_i; cin >> a_i;
        if (a_i > k) ans += 2;
        else ans++;
    }
    printf("%d", ans);
    return 0;
}