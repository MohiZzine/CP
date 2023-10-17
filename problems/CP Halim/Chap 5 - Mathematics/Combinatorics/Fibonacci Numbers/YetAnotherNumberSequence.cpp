#include <bits/stdc++.h>

using namespace std;

int a, b, n, m;

int main() {
    int t; cin >> t;
    while(t--) {
        scanf("%d%d%d%d", &a, &b, &n, &m);
        long double golden = (1 + sqrt(5))/ 2;
        long double ans = (pow(golden, n) - pow(-golden, n)) / sqrt(5);
        cout << (long long)(ans) % (long long)pow(10, m) << "\n";

    }

    return 0;
}