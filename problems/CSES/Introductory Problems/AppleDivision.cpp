//
// Created by Student on 14/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000000;
bool m[MOD];

int main() {
    memset(m, 0, sizeof(m));
    m[0] = 1;
    int n; cin >> n;
    ll sum = 0, i, j;
    int p[n];
    for (int t = 0; t < n; t++) {
        cin >> p[t];
        sum += p[t];
    }
    for (int j = 0; j < n; j++)
        for (int k = sum; k >= p[j]; k--)
            m[k] |= m[k - p[j]];

//    for (int i = 0; i < sum ; i++)
//        printf("m[%d] = %d\n", i, m[i]);
    if ((sum / 2) % 2 == 0) {
        printf("0\n"); return 0;
    }
    i = sum / 2; j = sum / 2 + 1;
    while(!m[i] || !m[j]) {
        i--; j++;
    }
    if (m[i])
        while(!m[j]) j++;
    if (m[j])
        while(!m[i]) i--;
    cout << j - i << "\n";

    return 0;
}