//
// Created by Student on 14/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M, test = 1, ans;
    long long totalSum;
    while(scanf("%d %d", &N, &M) != EOF) {
        int m[N][N];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) {
                cin >> m[N - i - 1][j];
                if (i < N - 1) m[i][j] += m[i + 1][j];
                if (j > 0) m[i][j] += m[i][j - 1];
                if (i < N - 1 && j > 0) m[i][j] -= m[i - 1][j - 1];
            }

        if (test++ > 1) printf("\n");
        totalSum = 0;
        for (int i = N - 1; i >= M; i--) {
            for (int j = 0; j <= N - M - 1; j++) {
                ans = m[i - M][j + M];
                if (i < N - 1)
                    ans -= m[i + 1][j + M];
                if (j > 0)
                    ans -= m[i - M][j - 1];
                if (i < N - 1 && j > 0)
                    ans += m[i + 1][j - 1];
               totalSum += ans;
                printf("%d\n", ans);
            }
        }
        printf("%lld\n", totalSum);
    }
    return 0;
}