#include <bits/stdc++.h>

using namespace std;

int main() {
    int C, S, cases = 1;
    double imb, avg;
    while(scanf("%d%d", &C, &S) != EOF) {
        int w[2*C];
        imb = 0;
        avg = 0;
        for (int i = 0; i < S; i++) {
            cin >> w[i];
            avg += (double)w[i] / (double)C;
        }

        for (int i = S; i < 2 * C; i++)
            w[i] = 0;

        sort(w, w + 2 * C);
        printf("Set #%d\n", cases++);
        for (int i = 0; i < C; i++) {
            printf(" %d:", i);
            if (w[i]) printf(" %d", w[i]);
            if (w[2 * C - i - 1]) printf(" %d", w[2*C - i - 1]);
            printf("\n");
            imb += abs(w[i] + w[2 * C - i - 1] - avg);
        }
        printf("IMBALANCE = %.5lf\n\n", imb);
    }

    return 0;
}