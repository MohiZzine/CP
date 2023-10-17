//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[4], ans = 0;
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        int k = (int)s[i] - '0';
        ans += arr[k - 1];
    }
    printf("%d", ans);
    return 0;
}