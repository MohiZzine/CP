//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N, M;
    while(scanf("%lld %lld", &N, &M) == 2) {
        if (M == 0) cout << 1 << endl;
        else {
            long long ans = 1;
            int i = N;
            while(i >= N - M + 1) {
                ans *= i;
                while(ans % 10 == 0)
                    ans /= 10;
                ans = ans % 1000000000;
                i--;
            }
            printf("%lld\n", ans % 10);
        }
    }
    return 0;
}