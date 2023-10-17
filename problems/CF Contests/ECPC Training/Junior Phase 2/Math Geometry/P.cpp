#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    long double res = 0;

    for (int i = 1; i <= n; i++) res += log10(i);
    printf("Number of digits of %d! is %lld", n, (long long)res + 1);
    return 0;
}