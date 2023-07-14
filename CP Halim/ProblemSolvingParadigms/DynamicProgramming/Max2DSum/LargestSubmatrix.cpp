//
// Created by Student on 14/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

//int solve(int matrix[25][25]) {
//
//}

#define INF 10000000;
int main() {
    int TC; cin >> TC;
    while(TC--) {
        int m[25][25], best, sum;
        string s;
        int i = 0, j;
        while(cin >> s) {
            if (s.empty()) break;
            j = s.size();
            for (int k = 0; k < j; k++) {
                if (s[k] == '0') {
                    m[i][k] = -INF;
                } else {
                    m[i][k] = 1;
                }
                if (i > 0) m[i][k] += m[i - 1][k];
                if (k > 0) m[i][k] += m[i][k - 1];
                if (i > 0 && k > 0) m[i][k] -= m[i - 1][k - 1];
            }
            i++;
        }
        best = -INF;
        for (int u = 0; u < i; u++) for(int v = 0; v < j; v++)
            for (int h = u; h < i; u++) for (int t = j; t < j; t++) {
                sum = m[h][t];
                if (u > 0) sum -= m[u - 1][t];
                if (v > 0) sum -= m[h][v - 1];
                if (u > 0 && v > 0) sum += m[u - 1][v - 1];
                best = max(best, sum);
            }
    }

    return 0;
}