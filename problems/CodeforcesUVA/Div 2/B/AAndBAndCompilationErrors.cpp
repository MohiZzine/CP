#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        long long k; cin >> k;
        sum1 += k;
    }

    sum2 = sum1;
    for (int i = 0; i < n - 1; i++) {
        long long k; cin >> k;
        sum1 -= k;
    }

    cout << sum1 << "\n";
    sum2 -= sum1;

    for (int i = 0; i < n - 2; i++) {
        long long k; cin >> k;
        sum2 -= k;
    }
    cout << sum2;
    return 0;
}