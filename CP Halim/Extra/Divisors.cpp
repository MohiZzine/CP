//
// Created by Student on 15/07/2023.
//

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int divs[1000001];

int num_divs(int n) {
    if (n <= 1000000 && divs[n] != -1) return divs[n];
    int initial = n;
    if (n > 1000000) {
        int total = 1;
        for (int k = 2; n > 1000000; k++){
            int fact = 1;
            while (n % k == 0) {
                n /= k;
                fact++;
            }
            total *= fact;
        }
        return total * num_divs(n);
    }
    int num = 2;
    while(n > 1) {
        for (int k = 2; n > 1; k++) {
            int fact = 1;
            while(n % k == 0) {
                fact++;
                n /= k;
            }
            num *= fact;
        }
    }
    divs[initial] = num / 2;
    return num / 2;
}

int main() {
    memset(divs, -1, sizeof divs);
    divs[1] = 1;
    int N; cin >> N;
    while(N--) {
        int L, U, ans, max_divs;
        set<int> candidates;
        cin >> L >> U;
        printf("Between %d and %d, ", L, U);
        if (U == L) {
            printf("%d has a maximum of %d divisors.\n", U, num_divs(U));
            continue;
        }
        max_divs = 0;
        for (int i = L; i <= U; i++) {
            int divs = num_divs(i);
            if (divs > max_divs) {
                max_divs = divs;
                ans = i;
            }
        }
        printf("%d has a maximum of %d divisors.\n", ans, max_divs);
    }

    return 0;
}