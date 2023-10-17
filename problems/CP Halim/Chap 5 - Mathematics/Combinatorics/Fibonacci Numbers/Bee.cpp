#include <bits/stdc++.h>

using namespace std;

const int MAX = 50;

int main() {
    long long fib[MAX + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= MAX; i++) fib[i] = fib[i - 1] + fib[i - 2] + 1;

    int n;
    while(scanf("%d", &n), n != -1) {
        cout << fib[n] << " " << fib[n + 1] << "\n";
    }
    return 0;
}