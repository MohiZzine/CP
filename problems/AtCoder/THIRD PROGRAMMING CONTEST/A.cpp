#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, p; scanf("%d%d%d", &n, &m, &p);
    if (n < m) cout << 0;
    else cout << (n - m) / p + 1;
    return 0;
}