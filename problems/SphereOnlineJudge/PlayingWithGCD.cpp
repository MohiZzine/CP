#include <iostream>
using namespace std;

const int MAX = 1e6 + 5;
long long phi[MAX];

int main() {
    for (int i = 1; i < MAX; i++) phi[i] = i;
    for (int i = 2; i < MAX; i++) {
        if (phi[i] == i) {
            for (int j = i; j < MAX; j += i) phi[j] -= phi[j] / i;
        }
    }

    for (int i = 2; i < MAX; i++) phi[i] += phi[i - 1];

    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        long long n; cin >> n;
        long long ans = n * (n + 1) / 2 - phi[n];
        printf("Case %d: %lld\n", i, ans);
    }
    return 0;
}