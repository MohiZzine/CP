#include <bits/stdc++.h>

using namespace std;

const int MAX = 50;
int main() {
    long long fact[MAX + 1];
    fact[0] = 0; fact[1] = 1;
    for (int i = 2; i <= MAX; i++) fact[i] = fact[i - 1] + fact[i - 2];

    int n; cin >> n;
    while(n--) {
        long long k; cin >> k;
        long long tmp = k;
        string s = "";
        int i = MAX;
        while(i >= 2 && fact[i] > k) i--;
        while(i >= 2) {
            if (fact[i] <= k) {
                k-= fact[i];
                s += '1';
            } else {
                s += '0';
            }
            i--;
        }

        cout << tmp << " = " << s << " (fib)\n";
    }
    return 0;
}