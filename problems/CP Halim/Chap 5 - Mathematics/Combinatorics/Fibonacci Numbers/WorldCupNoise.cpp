#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cases = 1; cin >> n;
    unsigned long long fib[51];
    fib[1] = 2;
    fib[2] = 3;
    for (int i = 3; i < 51; ++i) fib[i] = fib[i - 1] + fib[i - 2];
    while(n--) {
        int x; cin >> x;
        printf("Scenario #%d:\n", cases++);
        cout << fib[x] << endl << endl;
    }
    return 0;
}