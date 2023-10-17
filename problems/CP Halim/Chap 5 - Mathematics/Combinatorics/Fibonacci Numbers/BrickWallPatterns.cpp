#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long fib[52];
    fib[1] = 1; fib[2] = 2;
    for (int i = 3; i < 52; i++) fib[i] = fib[i - 1] + fib[i - 2];
    int n;
    while(scanf("%d", &n), n) {
        cout << fib[n] << "\n";
    }
    return 0;
}