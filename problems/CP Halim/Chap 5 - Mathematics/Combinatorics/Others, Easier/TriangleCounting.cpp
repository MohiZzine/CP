#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;
long long n;
int main() {
    long long f[MAX + 1];
    f[3] = 0;
    for (long long i = 4; i <= MAX; i++) f[i] = f[i - 1] + ((i - 1) * (i - 2) / 2 - (i - 1) / 2 + 1) / 2;
    while(scanf("%d", &n), n >= 3) {
        cout << f[n] << "\n";
    }
    return 0;
}