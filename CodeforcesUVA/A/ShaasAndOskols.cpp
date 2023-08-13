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

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        if (x > 1) arr[x - 2] += y - 1;
        if (x < n) arr[x] += arr[x - 1] - y;
        arr[x - 1] = 0;
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}