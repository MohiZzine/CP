#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAX = 1000000;
bitset<MAX + 1> sieve;

int reversed(int k) {
    string s = "";
    while(k) {
        s += k % 10 + '0';
        k /= 10;
    }
    return stoi(s);
}

int main() {
    sieve.set();
    sieve[0] = sieve[1] = 0;
    for (ll i = 2; i < MAX; i++) {
        if (sieve[i]) {
            for (ll j = i * i; j < MAX; j += i) sieve[j] = 0;
        }
    }
    int n;
    while(scanf("%d", &n) != EOF) {
        if (sieve[n] &&  reversed(n) != n && sieve[reversed(n)]) printf("%d is emirp.\n", n);
        else if (!sieve[n]) printf("%d is not prime.\n", n);
        else printf("%d is prime.\n", n);
    }
    return 0;
}