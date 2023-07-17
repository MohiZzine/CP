//
// Created by ADMIN on 17/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &N), N) {
        int sum = 0;
        for (int i = 2; i * i <= N; i++) {
            if (i * i == N) sum += i;
            else if (N % i == 0) sum += i + N / i;
        }
        cout << setw(5) << N << "  ";
        if (sum + 1 == N)
            printf("PERFECT\n");
        else if (sum + 1 < N)
            printf("DEFICIENT\n");
        else
            printf("ABUNDANT\n");
    }
    printf("END OF OUTPUT");
    return 0;
}