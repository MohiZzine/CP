//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;
int n;
int arr[1000];
//int solve(int n) {
//
//}

int main() {
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1) {
        printf("1"); return 0;
    }
    if (n == 2) {
        printf("2"); return 0;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        int j = i, k = i;
        while(j > 0 && arr[j - 1] <= arr[j--]) count++;
        while(k + 1 < n && arr[k + 1] <= arr[k++]) count++;
        ans = max(count, ans);
    }

    printf("%d", ans);
    return 0;
}