#include <bits/stdc++.h>

using namespace std;

const int MAX = 32769;

bitset<MAX> sieve;

int main() {
    sieve.set();
    sieve[0] = sieve[1] = 0;
    for (long long i = 0; i < MAX; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j < MAX; j += i) sieve[j] = 0;
        }
    }
    int n;
    while(scanf("%d", &n), n) {
        int count = 0;
        for (int p1 = 2; p1 <= n / 2; p1++) {
            if (sieve[n - p1] && sieve[p1]) count++;
        }
        cout << count << "\n";
    }

    return 0;
}