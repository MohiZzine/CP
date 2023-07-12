//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, sum, best;
    while(scanf("%d", &N), N) {
        sum = 0; best = -100000;
        for (int i = 0; i < N; i++) {
            int x; cin >> x;
            sum += x;
            best = max(best, sum);
            if (sum < 0) sum = 0;
        }
        if (best > 0)
        printf("The maximum winning streak is %d.\n", best);
        else
            printf("Losing streak.\n");
    }

    return 0;
}
