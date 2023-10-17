//
// Created by Student on 15/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, cas = 1;
    while(scanf("%d %d", &n, &m), (n | m)) {
        char x[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> x[i][j];

        int ans[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                ans[i][j] = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (x[i][j] == '*') {
                    if (i + 1 < n) ans[i + 1][j]++;
                    if (j + 1 < m) ans[i][j + 1]++;
                    if (i > 0) ans[i - 1][j]++;
                    if (j > 0) ans[i][j - 1]++;
                    if (i + 1 < n && j + 1 < m) ans[i + 1][j + 1]++;
                    if (i > 0 && j + 1 < m) ans[i - 1][j + 1]++;
                    if (i > 0 && j > 0) ans[i - 1][j - 1]++;
                    if (i + 1 < n && j > 0) ans[i + 1][j - 1]++;
                }
        if (cas > 1) printf("\n");
        printf("Field #%d:\n", cas++);
        for (int k = 0; k < n; k++) {
            for (int l = 0; l < m; l++) {
                if (x[k][l] == '*') printf("*");
                else printf("%d", ans[k][l]);
            }
            printf("\n");
        }
    }
    return 0;
}