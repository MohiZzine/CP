#include <iostream>

using namespace std;


int main() {
    long long n; scanf("%lld", &n);
    int ans = 0;
    for (long long i = 2; i * i <= n; i++) {
        int expo = 0;
        if (n % i == 0) {
            while(n % i == 0) expo++, n /= i;
        }

        for (int k = 1; expo - k >= 0; k++) {
            expo -= k;
            ans++;
        }
    }

    if (n > 1) ans++;
    cout << ans;
    return 0;
}