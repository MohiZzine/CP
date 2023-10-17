#include <bits/stdc++.h>

using namespace std;

int main() {
    long long fact[20];
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= 19; i++) fact[i] = fact[i - 1] * i;
    int a, b; cin >> a >> b;
    cout << fact[a] / fact[b] / fact[a - b] << " ";
    cout << fact[a] / fact[a - b];
    return 0;
}