#include <bits/stdc++.h>

using namespace std;

double const INF = 50000.0;
int main() {
    int n, m, k; scanf("%d", &n);
    vector<double> x(n);
    double max_p1 = -1, min_p2 = INF, max_r1 = -1;
    for (int i = 0; i < n; i++) scanf("%lf", &x[i]), max_r1 = max(max_r1, x[i]);

    scanf("%d", &m);
    vector<double> y(m);
    for (int i = 0; i < m; i++) scanf("%lf", &y[i]), max_p1 = max(max_p1, y[i]);
    scanf("%d", &k);
    vector<double> z(k);
    for (int i = 0; i < k; i++) scanf("%lf", &z[i]), min_p2 = min(min_p2, z[i]);
    double A, B; scanf("%lf %lf", &A, &B);
    double ans = max_r1 * (sqrt((B * max_p1) / (A * min_p2 + B * max_p1)));
    printf("%.12lf", ans);


    return 0;
}