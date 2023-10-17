//
// Created By MOHI
//
#include <bits/stdc++.h>
#include <bitset>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll _sieve_size;
bitset<20000010> bs;
vi primes, twin_primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = i * 2; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((int)i);
    }
}

bool isPrime(ll N) {
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}

int main() {
    sieve(20000000);
    int n;
    for (int i = 0; i < primes.size(); i++) {
        if (isPrime(primes[i] + 2))
            twin_primes.push_back(primes[i]);
    }

    while(scanf("%d", &n) != EOF) {
        printf("(%d, %d)\n", twin_primes[n - 1], twin_primes[n - 1] + 2);
    }
    return 0;
}