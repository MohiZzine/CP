//
// Created by Student on 15/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, A[3001], i;
    while(scanf("%d", &n) == 1) {
        for (i = 0;i < n; i++)
            scanf("%d", &A[i]);

        int mark[3001] = {0};
        bool jolly = true;

        for (i = 1; i < n; i++) {
            if (abs(A[i] - A[i - 1]) < n)
                mark[abs(A[i] - A[i - 1])]++;
        }

        for (i = 1; i < n; i++)
            if (mark[i] == 0) jolly = false;

        if (jolly) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;
}