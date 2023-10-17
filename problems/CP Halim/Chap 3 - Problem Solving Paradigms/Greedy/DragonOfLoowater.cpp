#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while(scanf("%d%d", &n, &m), n | m) {
        int heads[n], heights[m];
        for (int i = 0; i < n; i++)
            cin >> heads[i];
        for (int j = 0; j < m; j++)
            cin >> heights[j];

        sort(heads, heads+ n);
        sort(heights, heights + m);

        int gold = 0, d = 0, k = 0;
        while(d < n && k < m) {
            while(heads[d] > heights[k] && k < m) k++;
            if (k == m) break;
            gold += heights[k];
            d++; k++;
        }

        if (d == n) printf("%d\n", gold);
        else printf("Loowater is doomed!\n");
    }
    return 0;
}