#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, even = 0, odd = 0; cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = (a % 2 == 0 ? a: a + 1); i <= b; i += 2) {
        even += i;
    }

    for (int i = (a % 2 == 0 ? a + 1: a); i <= b; i += 2) {
        odd += i;
    }

    cout << odd + even << "\n";
    cout << even << "\n";
    cout << odd;
    return 0;
}