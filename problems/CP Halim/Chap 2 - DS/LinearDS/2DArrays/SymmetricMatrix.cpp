//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, test = 1; cin >> T;
    while(T--) {
        bool symm = true;
        char n, sign; cin >> n >> sign;
        int N; cin >> N;
        long long matrix[N][N];
//        printf("N = %d\n", N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> matrix[i][j];
                if (matrix[i][j] < 0) symm =false;
            }
        }

        if (!symm) {
            printf("Test #%d: Non-symmetric.\n", test++); continue;
        }

        for (int i = 0; i <= N / 2; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] != matrix[N - 1 - i][N - 1 - j]) {
                    symm = false; break;
                }
            }
        }

        if (!symm) {
            printf("Test #%d: Non-symmetric.\n", test++);
        } else {
            printf("Test #%d: Symmetric.\n", test++);
        }
    }
    return 0;
}