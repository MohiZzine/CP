//
// Created By MOHI
//
#include <bits/stdc++.h>
#include <bitset>

using namespace std;
typedef long long ll;
ll _sieve_size;
typedef vector<int> vi;
bitset<1000010> bs;
vi primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set();                               // Set all bits to 1
    bs[0] = bs[1] = 0;                      // except index 0 and 1
    for (int i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = 2 * i; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((int)i);
    }
}

bool isPrime(ll N) {
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}

int main() {
    sieve(1000000);
    int n;
    while(scanf("%d", &n), n) {
        int p = 0, q = 0;
        for (int i = 0; i < primes.size() && primes[i] <= n / 2; i++) {
           if (isPrime(n - primes[i])) {
               p = primes[i]; q = n - primes[i];
               break;
           }
        }
        if (p == 0 || q == 0)
            printf("Goldbach's conjecture is wrong.\n");
        else
            printf("%d = %d + %d\n", n, p, q);
    }
    return 0;
}