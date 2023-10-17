#include <bits/stdc++.h>

using namespace std;

const int MAX = 10000;
bitset<MAX + 1> sieve;
int main() {
    sieve.set();
    sieve[0] = sieve[1] = 0;
    for (long long i = 2; i < MAX; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j < MAX; j += i) sieve[j] = 0;
        }
    }

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        int k = n / 2, i = 0;
        while(!sieve[k + i] && !sieve[k - i]) i++;
        if (sieve[k + i] && sieve[k - i]) cout << n - min(n / (k + i) * (k + i), n / (k - i) * (k - i)) << "\n";
        else if (sieve[k + i]) cout << n / (k + i) * (k + i) << "\n";
        else cout << k + i << "\n";
    }
    return 0;
}