//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int value[1000005];

//int solve(int x) {
//    if (value[x] != -1) return value[x];
//    if (x == 0) return 0;
//    value[x] = 0;
//    if (x % 10 == 0) {
//        value[x] = solve(x - ((x / 10) % 10)) + 1;
//    } else {
//        value[x] = solve(x - x % 10) + 1;
//    }
//    return value[x];
//}

int main() {
    memset(value, -1, sizeof(value));
    int n; cin >> n;
    value[0] = 0;
//    for (int k = 1; k <= 9; k++)
//        value[k] = 1;
    for (int i = 1; i <= n; i++) {
        if ((i - 1) % 10 != 0)
            value[i] =  value[i - 1];
        if (i % 10 == 0 || (i - 1) % 10 == 0)
            value[i] = value[i - 1] + 1;
    }
    printf("%d", value[n]);
    return 0;
}
