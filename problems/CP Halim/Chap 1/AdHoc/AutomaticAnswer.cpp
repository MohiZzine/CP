//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int solve(long long n) {
    n *= 567;
    n /= 9;
    n += 7492;
    n *= 235;
    n /= 47;
    n -= 498;
    if (n < 0) n *= -1;
    return (n / 10) % 10;
}

int main() {
    int TC; cin >> TC;
    while(TC--) {
        long long n; cin >> n;
        cout << solve(n) << "\n";
    }


    return 0;
}
