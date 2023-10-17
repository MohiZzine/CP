#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sum = 0;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) sum += i + (i * i == n ? 0: n / i);
        }

        if (++sum == n) cout << "perfect";
        else if (sum > n) cout << "abundant";
        else cout << "deficient";
        cout << "\n";
    }
    return 0;
}