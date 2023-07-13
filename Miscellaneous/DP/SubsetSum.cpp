//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int M, N; cin>> M >> N;
    int m[M + 10], a[N];
    for (int k = 0; k < N; k++)
        scanf("%d", &a[k]);
    for (int i = 0; i < M + 10; i++) m[i] = 0;
    m[0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = M; j >= a[i]; j--) {
            m[j] |= m[j - a[i]];
        }
    }
    if (m[M])
        printf("There is a subset whose sum is %d", M);
    else
        printf("There is no subset whose sum is %d", M);


    return 0;
}