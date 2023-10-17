//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (n == 1) {
        printf("0"); return 0;
    }
    int small = 0, large = 0;
    while(small < n && arr[small] == arr[0]) small++;
    while(large < n && arr[n - large - 1] == arr[n - 1]) large++;
    int ans = n;
    if (small <= n) ans -= small;
    if (large <= n - small) ans -= large;
    printf("%d", ans);
    return 0;
}