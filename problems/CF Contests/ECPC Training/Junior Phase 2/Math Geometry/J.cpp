#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> factors;
    while(n % 2 == 0) {
        factors[2]++;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }

    if (n > 1) factors[n]++;
    int c = 0;
    for (auto f:factors) {
        if (c > 0) cout << "*";
        printf("(%d^%d)", f.first, f.second);
        c++;
    }
    return 0;
}