//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, a; cin >> n >> m >> a;
    long long t, k;
    if (n % a != 0) t = n / a + 1;
    else t = n / a;
    if (m % a != 0) k = m / a + 1;
    else k = m / a;
    cout << t * k;
    return 0;
}