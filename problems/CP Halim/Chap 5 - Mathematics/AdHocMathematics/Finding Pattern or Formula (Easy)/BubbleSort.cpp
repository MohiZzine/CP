#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cases = 1; cin >> t;
    while(t--) {
        printf("Case %d: ", cases++);
        long long n; cin >> n;
        long long ans = (n * (n - 1)) / 2;
        if (ans % 2 == 0) {
            printf("%lld", ans / 2);
        } else {
            printf("%lld/2", ans);
        }
        printf("\n");
    }

    return 0;
}