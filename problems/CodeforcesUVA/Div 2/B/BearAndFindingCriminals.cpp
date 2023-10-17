//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, ans = 0;
    cin >> n >> a;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int step = 0;
    while(a - step >= 1 && a + step <= n) {
        if (step == 0) ans = arr[a - step] == 1 ? 1: 0;
        else if (arr[a - step] + arr[a + step] == 2) ans += 2;
        step++;
    }

    if (a - step >= 1) {
        while(a - step >= 1) {
            if (arr[a - step++]) ans++;
        }
    } else {
        while(a + step <= n) {
            if (arr[a + step++]) ans++;
        }
    }

    printf("%d", ans);
    return 0;
}