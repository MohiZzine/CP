#include <bits/stdc++.h>

using namespace std;

const int MAX = 10000 * 1000;
bitset<MAX + 1> bs;
set<long long> primes;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bs.set();
    bs[0] = bs[1] = 0;
    for (long long i = 2; i < MAX; i++) {
        if (bs[i]) {
            primes.insert(i);
            for (long long j = i * i; j < MAX; j += i) bs[j] = 0;
        }
    }
    long long n;
    while(scanf("%lld", &n), n != -1) {
        for (long long p: primes) {
            if (p != n && n % p != 0) continue;
            else if (p == n) {
                cout << -1;
                break;
            }
            else if (n % p == 0) {
                cout << n / p;
                break;
            }
        }
    }
    return 0;
}