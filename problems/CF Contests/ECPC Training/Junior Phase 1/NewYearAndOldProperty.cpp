#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b; cin >> a >> b;
    int count = 0;
    for (int i = 0; i < 64; i++) {
        for (int j = 0; j < 64; j++) {
            long long mask = (1LL << i) - 1 - (1LL << j);
            if (mask <= b && mask >= a) count++;
        }
    }
    cout << count;
    return 0;
}