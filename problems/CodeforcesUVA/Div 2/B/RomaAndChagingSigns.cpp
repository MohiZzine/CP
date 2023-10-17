#include <bits/stdc++.h>

using namespace std;

bool comp(long long a, long long b) {
    return abs(a) < abs(b);
}

int main() {
    int n, k, neg = 0; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) neg++;
    }

    long long ans = 0;
    for (int i = 0; i < n, k > 0; i++) {
        if (arr[i] < 0) arr[i] *= -1, k--;
        else break;
    }

    sort(arr, arr + n);
    if (k > 0) {
        if (k % 2)
            arr[0] *= -1;
    }

    for (int i = 0; i < n; i++)
        ans += arr[i];
    cout << ans << endl;
    return 0;
}