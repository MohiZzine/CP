//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int n, k;
bool valid(int v) {
    long long int p = 0;
    for (int t = v; t > 0; t /= k)
        p += t;
    return p >= n;
}

int main() {
    cin >> n >> k;
    int left = 1, right = n;
    while(right > left) {
        int mid = left + (right - left) / 2;
        if (valid(mid)) right = mid;
        else left = mid + 1;
    }
    printf("%d", left);
    return 0;
}