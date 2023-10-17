//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    while(n--) {
        string s; cin >> s;
        int arr[10] = {0};
        for (int i = 0; i < s.length(); i++) {
            arr[(int)(s[i] - '0')]++;
        }
        bool good = true;
        for (int i = 0; i <= k; i++)
            if (arr[i] == 0) {
                good = false; break;
            }
        if (good) ans++;
    }
    printf("%d", ans);
    return 0;
}