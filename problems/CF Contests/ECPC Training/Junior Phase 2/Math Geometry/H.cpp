#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a: gcd(b, a % b);
}
int main() {
    long long a, b; cin >> a >> b;
    cout << gcd(a, b) << " " << a / gcd(a, b) * b;
    return 0;
}