//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0, d = 0; cin >> n;
    bool sereja = true;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = n - 1;
    while(left <= right) {
        if (sereja) {
            if (arr[left] > arr[right]) s += arr[left++];
            else s += arr[right--];
            sereja = false;
            continue;
        }
        if (!sereja) {
            if (arr[left] > arr[right]) d += arr[left++];
            else d += arr[right--];
            sereja = true;
            continue;
        }
    }
    printf("%d %d", s, d);
    return 0;
}