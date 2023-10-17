#include <bits/stdc++.h>
#include <bitset>

using namespace std;

typedef long long ll;
#define MAX_INT 65005

bitset<10000001> bs;
void sieve() {
    bs.set();
    bs[0] = bs[1] = 0;
    for (int i = 2; i < MAX_INT; i++) {
        if (bs[i]) {
            for (int k = i * i; k < MAX_INT; k += i) {
                bs[k] = 0;
            }
        }
    }
}


int main() {
    sieve();
    ll n;
    while(scanf("%lld", &n), n) {
        if (bs[n]) printf("The number %lld is a Carmichael number.\n", n);
        else printf("%lld is normal.\n", n);
    }
    return 0;
}