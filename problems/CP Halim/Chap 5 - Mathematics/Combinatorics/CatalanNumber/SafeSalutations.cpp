//
// Created by ADMIN on 17/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

long long facts[21] = {1};
long long facto(int n) {
    if (facts[n] != -1) return facts[n];
    if (n == 0 || n == 1) return 1;
    facts[n] = 1;
    facts[n] *= n * facts[n - 1];
    return facts[n];
}

int main() {
//    memset(facts, -1, sizeof(facts));
    for (int k = 0; k <= 20; k++)
        facts[k] = 1;
    for (int i = 1; i <= 20; i++) {
        facts[i + 1] = (i + 1) * facts[i];
    }
    int n, cas = 1;
    while(cin >> n) {
        long long sol = facts[2 * n] / (facts[n] * facts[n] * (n + 1));
        if (cas++ > 1)
            printf("\n");
        printf("%d\n", sol);
//        printf("\n");
    }

    return 0;
}