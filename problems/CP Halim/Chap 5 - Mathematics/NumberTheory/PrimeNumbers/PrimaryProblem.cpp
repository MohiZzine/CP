#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll _sieve_size;
bitset<10000010> bs;


int main() {
    _sieve_size = 10000000 + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    }

    int n;
    while(cin >> n && n) {
        cout << n << ":\n";
        bool valid = false;
        if (bs[n - 2]) {
            cout << 2 << "+" << n - 2 << "\n";
            continue;
        }
        for (int i = 3; i <= n - 2; i += 2)
            if (bs[i] && bs[n - i]) {
                cout << i << "+" << n - i << "\n";
                valid = true;
                break;
            }
        if (!valid) cout << "NO WAY!\n";
    }
    return 0;
}
