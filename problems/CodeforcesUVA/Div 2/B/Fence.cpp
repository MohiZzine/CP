#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0, best = 0;
    for (int i = 0; i < k; i++) {
        best += arr[i];
    }
    int sum = best;
    for (int j = ans + 1; j + k - 1< n; j++) {
        sum -= arr[j - 1];
        sum += arr[j + k - 1];
        if (sum < best) best = sum, ans = j;
    }

    cout << ++ans;
    return 0;
}