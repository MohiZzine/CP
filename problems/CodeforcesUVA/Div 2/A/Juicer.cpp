//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d; cin >> n >> b >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= b) {
            if (sum <= d) sum += arr[i];
            if (sum > d) {
                sum = 0;
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}