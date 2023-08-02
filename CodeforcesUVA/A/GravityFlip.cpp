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
    printf("%d", arr[0]);
    for (int i = 1; i < n; i++)
        printf(" %d", arr[i]);
    return 0;
}