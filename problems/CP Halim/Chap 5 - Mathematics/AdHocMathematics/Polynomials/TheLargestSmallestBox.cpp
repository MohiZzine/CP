#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    float L, W;
    while(scanf("%lf%lf", &L, &W) != EOF) {
        float delta = 4 * pow(L + W, 2) + 48 * W * L;
        float f = (sqrt(delta) - 2 * (L + W)) / 24;
         printf("%.3lf %.3lf %.3lf\n", f, 0.000, min(L, W) / 2);
    }
    return 0;
}