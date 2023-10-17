#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b; cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int s = 0, tmp = i;
        while(tmp) {
            s += (tmp % 10);
            tmp /= 10;
        }
        if (s >= a && s <= b) sum += i;
    }
    cout << sum;
    return 0;
}