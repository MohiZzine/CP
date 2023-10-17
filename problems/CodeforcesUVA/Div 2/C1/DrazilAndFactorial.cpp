#include <bits/stdc++.h>

using namespace std;

long long fact[10];

int main() {
    fact[0] = fact[1] = 1;
    for (int i = 2; i < 10; i++) fact[i] = i * fact[i - 1];
    int n; cin >> n;
    long long a, target = 1; cin >> a;
    while(a) {
        target *= fact[a % 10];
        a /= 10;
    }

    vector<long long> factors;

    while(target % 2 == 0) {
        target /= 2;
        factors.push_back(2);
    }

    for (long long i = 3; i * i <= target; i += 2) {
        while(target % i == 0) {
            target /= i;
            factors.push_back(i);
        }
    }

    if (target > 1) factors.push_back(target);

    for (int i = factors.size() - 1; i >= 0; i--) cout << factors[i];
    return 0;
}