#include <bits/stdc++.h>

using namespace std;

long long n;
const int MAX = 1e6 + 5;
long long phi[MAX];
int main() {
    phi[1] = 0;
    for (int i = 2; i < MAX; i++) phi[i] = i;
    for (int i = 2; i < MAX; i++) {
        if (phi[i] == i) {
            for (int j = i; j < MAX; j += i) phi[j] -= phi[j] / i;
        }
    }

    while(scanf("%lld", &n), n) {
        if (n < MAX) cout << phi[n] << "\n";
        else {
            long long result = n;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    while(n % i == 0) n /= i;
                    result -= result / i;
                }
            }
            if (n > 1) result -= result / n;
            cout << result << "\n";
        }
    }
    return 0;
}