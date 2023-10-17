//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, first = 1; cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        int k; cin >> k;
        arr[k] = i;
    }
    for (int i = 1; i <= n; i++) {
        if (first++ > 1) printf(" ");
        printf("%d", arr[i]);
    }
    return 0;
}