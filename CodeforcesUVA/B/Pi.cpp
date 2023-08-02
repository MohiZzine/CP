//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int pgcd(int a, int b) {
    return b == 0 ? a: pgcd(b, a % b);
}

int main() {
    int N;
    while(scanf("%d", &N), N) {
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        int coprime = 0;
        for (int i = 0; i < N; i++)
            for (int j = i + 1; j < N; j++)
                if (pgcd(arr[i], arr[j]) == 1) coprime++;


        if (coprime) {
            double res = sqrt((double)N * (double)(N - 1) * 6.0 / (2.0 * (double)coprime));
            printf("%lf", res);
        } else printf("No estimate for this data set.");
        printf("\n");

    }
    return 0;
}