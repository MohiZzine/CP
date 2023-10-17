//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    return a > b? a:b;
}

int main() {
    int TC; cin >> TC;
    while(TC--) {
        int N, sum; cin >> N;
        int best = -3e7;
        int A[2 * N][2 * N];
        for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) {
            cin >> A[i][j];
            A[i][N + j] = A[i + N][j] = A[i + N][j + N] = A[i][j];
        }

        for (int i = 0; i < 2 * N; i++) for (int j = 0; j < 2 * N; j++) {
                if (i > 0) A[i][j] += A[i - 1][j];
                if (j > 0) A[i][j] += A[i][j - 1];
                if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
        }

//        sum = best;
        for (int i = 0; i < 2 * N; i++) for (int j = 0; j < 2 * N; j++)
            for (int k = i; k < 2 * N && k - i < N; k++) for (int l = j; l < 2 * N && l - j < N; l++) {
                sum = A[k][l];
                if (i > 0) sum -= A[i - 1][l];
                if (j > 0) sum -= A[k][j - 1];
                if (i > 0 && j > 0) sum += A[i - 1][j - 1];
                best = max(best, sum);
            }

        printf("%d\n", best);
    }

    return 0;
}
