#include <bits/stdc++.h>

using namespace std;

unsigned long long n, k;

int dig;

int main() {
     while(cin >> n >> k) {
         long double ans = 0;
         for (int i = 0; i < min(k, n - k); ++i) {
             ans += log10((double)(n - i)) -  log10((double)(i + 1));
         }

         dig = (int)ans + 1;
         cout << dig << "\n";
     }
    return 0;
}