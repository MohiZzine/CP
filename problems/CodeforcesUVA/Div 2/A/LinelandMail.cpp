//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int j = 0; j < n; j++) {
        if (j == 0)
            printf("%lld %lld", arr[j + 1] - arr[j], arr[n - 1] - arr[j]);
        else if (j == n - 1)
            printf("%lld %lld", arr[j] - arr[j - 1], arr[j] - arr[0]);
        else
            printf("%lld %lld", min(arr[j] - arr[j - 1], arr[j + 1] - arr[j]),
                   max(arr[j] - arr[0], arr[n - 1] - arr[j]));
        printf("\n");
    }
    return 0;
}