//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l; cin >> n >>l;
    double x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n);

    double smallest = ((double)x[0]);
    for (int i = 1; i < n; i++)
        smallest = max(smallest, (double)(x[i] - x[i - 1]) / 2.0);
    smallest = max(l - x[n - 1], smallest);

    printf("%lf", smallest);
    return 0;
}