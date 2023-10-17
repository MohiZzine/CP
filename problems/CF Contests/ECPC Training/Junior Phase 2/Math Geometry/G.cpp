#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, sum = 0; cin >> n;
    long long i;
    for (i = 2; i * i < n; i++) {
        if (n % i == 0) sum += (i + n / i);
    }

    if (i * i == n) sum += i;
    if (n == 1) cout << 1;
    else cout << sum + 1 + n;
    return 0;
}