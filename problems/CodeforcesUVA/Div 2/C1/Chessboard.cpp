#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        double ans;
        if (n == 1) cout << 0.000 << "\n" ;
        else if (n % 2 == 0) {
            ans = n * n;
            printf("%.3lf\n", ans);
        } else {
            ans = n * n - n + 2 + sqrt(2) * (n - 2);
            printf("%.3lf\n", ans);
        }
    }
    return 0;
}