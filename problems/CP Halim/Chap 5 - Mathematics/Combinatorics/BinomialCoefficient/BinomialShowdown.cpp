#include <bits/stdc++.h>

using namespace std;

int main() {


    int n, k;
    long long unsigned ans;
    while(scanf("%d%d", &n, &k), n | k) {
        if (k > n / 2) k = n - k;

        ans = 1;
        for (int i = 0; i < k; i++) {
            ans *= (n - i);
            ans /= (i + 1);
        }

        cout << ans << "\n";
    }


    return 0;
}