//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

const long long MAX = 2147483647;

bitset<MAX + 1> sieve;

int main() {
    sieve.set();
    sieve[0] = sieve[1] = 0;
    for (long long i = 0; i < MAX; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j < MAX; j += i) sieve[j] = 0;
        }
    }
    int L, U;
    while(scanf("%d %d", &L, &U) != EOF) {
        int s1, s2, small = 1e6 + 1;
        int first = -1, last = -1, count = 0;
        for (int i = L; i <= U; i++) {
            if (sieve[i]) {
                count++;
                if (count == 1) {
                    first = i;
                    last = i;
                    continue;
                }
                else {
                    if (small > i - last) {
                        small = i - last;
                        s1 = last;
                        s2 = i;
                    }
                    last = i;
                }
            }
        }
        if (count < 2) cout << "There are no adjacent primes.\n";
        else {
            printf("%d,%d are closest, %d,%d are most distant.\n", first, last, s1, s2);
        }
    }
    return 0;
}