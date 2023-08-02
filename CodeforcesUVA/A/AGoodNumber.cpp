//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    while(n--) {
        int a; cin >> a;
        int arr[10] = {0};
        while(a != 0 && a % 10 <= k) {
            arr[a % 10]++;
            a /= 10;
        }
        bool good = true;
        for (int i = 0; i <= k; i++)
            if (!arr[i]) good = false;
        if (good) ans++;
    }
    printf("%d", ans);
    return 0;
}