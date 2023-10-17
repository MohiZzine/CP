#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n; cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << "\n";
        cout << 1;
        return 0;
    }

    long long prod = 1;

    int count = 0;
    vector<int> v;
    for (int i = 1; i < n; i++){
        if (gcd(i, n) == 1) {
            v.push_back(i);
            prod = (prod * i) % n;
            count++;
        }
    }
    int r;
    if (prod == 1) {
        r = v.size();
    } else r = v.size() - 1;

    cout << r << "\n";
    for (int i = 0; i < r ; i++) {
        cout << v[i] << " ";
    }
    return 0;
}