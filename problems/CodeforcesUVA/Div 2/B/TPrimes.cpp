#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 1;

bitset<MAX> sieve;

int main() {
    sieve.set();
    sieve[0] = sieve[1] = 0;
    for (long long i = 2; i < MAX; i++) {
        if (sieve[i]) for (long long j = i * i; j < MAX; j += i) sieve[j] = 0;
    }

    int n; cin >> n;
    while(n--) {
        long long k; cin >> k;
        long long x = sqrt(k);
        if (x * x == k) {
            if (sieve[x]) cout << "YES";
            else cout << "NO";
        } else cout << "NO";
        cout << "\n";
    }
    return 0;
}