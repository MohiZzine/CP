#include <bits/stdc++.h>

using namespace std;
const int MAX = 1000 * 1000;
bitset<MAX + 1> bs;
set<int> primes;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bs.set();
    bs[0] = bs[1] = 0;
    for (long long i = 2; i < MAX; i++) {
        if (bs[i]) {
            primes.insert((int)i);
            for (long long j = i * i; j < MAX; j += i) bs[j] = 0;
        }
    }
    long long n; cin >> n;
    if (n <= MAX) {
        if (bs[n]) cout << "YES";
        else cout << "NO";
    } else {
        for (int p: primes)  {
            if (n % p == 0) {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}
