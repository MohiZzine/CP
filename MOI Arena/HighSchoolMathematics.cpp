#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a: gcd(b, a % b);
}

set<int> primes;

void primeDivisors(int n) {
    int i = 2;
    while(n != 1) {
        if (n % i == 0) {
            primes.insert(i);
            while(n % i == 0) {
                n /= i;
            }
        }
        i++;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        primeDivisors(n);
        long long ans = n;
        for (int p: primes) {
            ans /= p;
            ans *= (p - 1);
        }
        cout << ans << endl;
        primes.clear();
    }
    return 0;
}