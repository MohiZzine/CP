#include <bits/stdc++.h>

using namespace std;

bitset<100000000> sieve;

int main() {
    sieve.set();
    sieve[0] = sieve[1] = 0;
    for (long long i = 2; i < 100000000; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j < 100000000; j += i) {
                sieve[j] = 0;
            }
        }
    }

    map<long long, pair<int, int>> twin;

    int count = 0;
    for (long long i = 3; i + 2 < 100000000; i += 2) {
        if (sieve[i] && sieve[i + 2]) twin[++count] = {i, i + 2};
    }

    int s;
    while(scanf("%d", &s) != EOF) {
       printf("(%d, %d)\n", twin[s].first, twin[s].second);
    }
    return 0;
}