//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    while(scanf("%d", &N), N){
        int nums[N], best = 0, sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }
        for (int k = 0; k < N; k++) {
            sum += nums[k];
            best = max(best, sum);
            if (sum < 0) sum = 0;
        }
        if (best > 0) printf("The maximum winning streak is %d.\n", best);
        else printf("Losing streak.\n");
    }

    return 0;
}