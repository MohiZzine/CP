//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0, avail = 0; cin >> n;
    while(n--) {
        int k; cin >> k;
        if (k == -1) {
            if (avail + k < 0) ans++;
            else avail += k;
        } else {
            avail += k;
        }
    }
    printf("%d", ans);
    return 0;
}