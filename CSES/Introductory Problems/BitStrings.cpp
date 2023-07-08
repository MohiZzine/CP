//
// Created by Student on 08/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

// ll solve(int n) {
//     return (1 << n) % MOD;
// }
int main() {
    int n, ans = 1; cin >> n;
    while(n--) {
        ans *= 2; 
        ans %= MOD;
    }
    cout << ans;
    return 0;
}
