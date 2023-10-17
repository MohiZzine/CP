#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    bool ok = false;
    for (int i = n - 1; i >= 2; i--) {
        if (arr[i - 2] + arr[i - 1] > arr[i]) {
            ok = true; break;
        }
    }

    if (ok) cout << "YES";
    else cout << "NO";
    return 0;
}