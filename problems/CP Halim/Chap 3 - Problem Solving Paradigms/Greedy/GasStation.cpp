#include <bits/stdc++.h>

using namespace std;
pair<int, int> P[10000];

int main() {
    int L, G;
    while(scanf("%d%d", &L, &G), L | G) {
        int x, r;
        for (int i = 0; i < G; i++) {
            cin >> x >> r;
            P[i] = make_pair(x - r, x + r);
        }

        sort(P, P + G);

        int pos = 0, aux, i = 0, ans = G;
        while(pos < L) {
            aux = pos;

            while(i < G && P[i].first <= pos)
                aux = max(aux, P[i++].second);

            if (aux == pos) break;

            pos = aux;
            --ans;
        }

        printf("%d\n", pos < L ? - 1: ans);
    }
    return 0;
}