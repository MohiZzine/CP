#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m;
    cin >> m;
    for (long long i = 2; i * i <= m; i++) {
        while(m % (i * i) == 0) {
            m /= i;
        }
    }
    cout << m;
    return 0;
}