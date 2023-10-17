//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int maxSubRect, subRect;

int main() {
    int n = 4;
    int A[4][4] = {
            {0, -2, -7, 0},
            {9, 2, -6, 2},
            {-4, 1, -4, 1},
            {-1, 8, 0, 2}
    };

    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) {
        if (i > 0) A[i][j] += A[i - 1][j];
        if (j > 0) A[i][j] += A[i][j - 1];
        if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
    }

    maxSubRect = -127 * 100* 100;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
        for (int k = i; k < n; k++) for (int l = j; l < n; l++) {
            subRect = A[k][l];
            if (i > 0) subRect -= A[i - 1][l];
            if (j > 0) subRect -= A[k][j - 1];
            if (i > 0 && j > 0) subRect += A[i - 1][j - 1];
            maxSubRect = max(subRect, maxSubRect);
        }
    printf("Max 2D Range Sum: %d\n", maxSubRect);

    return 0;
}