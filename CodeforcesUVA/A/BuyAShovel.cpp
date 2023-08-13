//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r; cin >> k >> r;
    int ans = 1;
    while((ans * k ) % 10 != 0 && ((ans * k) - r )% 10 != 0) ans++;
    printf("%d", ans);
    return 0;
}