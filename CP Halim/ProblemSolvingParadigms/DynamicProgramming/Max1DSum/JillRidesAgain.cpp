//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll best, sum;

int main() {
    int r, cas = 1; cin >> r;
    while(r--) {
        int start = 0, end = 0, best_start = 0, max_ride = 0, ride = 0;
        best = 0, sum = 0;
        int S; cin >> S;
        for (int i = 0; i < S - 1; i++) {
            int n; cin >> n;
            sum += n;
            if (best < sum) {
                best_start = start + 1;
                end = i + 2;
                best = sum;
                max_ride = best_start - end;
            } else if (best == sum) {
                ride = i + 1 - start;
                if (best_start < ride) {
                    best_start = start + 1;
                    end = i + 2;
                    max_ride = best_start - end;
                }
            }

            if (sum < 0) {
                start = i + 1;
                sum = 0;
            }
        }
        if (best > 0) {
            printf("The nicest part of route %d is between stops %d and %d\n", cas++, best_start, end);
        } else {
            printf("Route %d has no nice parts\n", cas++);
        }
    }

    return 0;
}
