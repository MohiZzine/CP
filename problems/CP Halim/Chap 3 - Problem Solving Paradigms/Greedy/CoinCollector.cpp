#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while(TC--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0;i < n; i++) {
            cin >> arr[i];
        }

        int coins = n > 1 ? 2: 1;
        int sum = 1;

        for (int i = 1; i < n - 1; i++) {
            if (sum + arr[i] < arr[i + 1]) {
                sum += arr[i];
                coins++;
            }
        }

        cout << coins << endl;

    }
    return 0;
}