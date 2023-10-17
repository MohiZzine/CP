#include <bits/stdc++.h>

using namespace std;

long long n, a, b;

int main() {
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        long long w; cin >> w;
        cout << ((w * a) % b) / a << " ";
    }

    return 0;
}