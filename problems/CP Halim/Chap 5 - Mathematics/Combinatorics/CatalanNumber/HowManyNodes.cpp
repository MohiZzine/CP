#include <bits/stdc++.h>

using namespace std;


const int MAX = 26;

long long cat[MAX + 1];
int main() {
    cat[0] = 1;
    cat[1] = 1;
    for (long long i = 2; i <= MAX; i++) cat[i] = cat[i - 1] * 2 * (2 * i - 1) / (i + 1);

    long long n;
    while(scanf("%lld", &n) != EOF) {
        for (int i = 1; i <= MAX; i++) {
            if (cat[i] == n) cout << i << "\n";
        }
    }
    return 0;
}