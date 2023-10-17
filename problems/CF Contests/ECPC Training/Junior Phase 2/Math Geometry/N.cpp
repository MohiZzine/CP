#include <bits/stdc++.h>

using namespace std;

int main() {
    char letter[26];
    for (char c = 'A'; c <= 'Z'; c++) {
        letter[c - 'A'] = c;
    }
    long long t, n, x; cin >> t >> n >> x;
    unsigned long long res = 0;
    if (t == 1) {
        long long p = 1;
        while(n) {
            res += ((n % 10) * p);
            p *= x;
            n /= 10;
        }
        cout << res;
    } else {
        string s;
        while(n) {
            unsigned int r = n % x;
            if (r > 9) s += letter[r - 10];
            else s += (char)(r + '0');
            n /= x;
        }
        reverse(s.begin(), s.end());
        cout << s;
    }
    return 0;
}