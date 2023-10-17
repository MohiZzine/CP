//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    double k; cin >> k;
    double poly[n][2];
    double dist = 0;
    for (int i = 0; i < n; i++)
        cin >> poly[i][0] >> poly[i][1];

    for (int j = 0; j < n - 1; j++) {
        dist += sqrt(pow(poly[j + 1][0] - poly[j][0], 2) +  pow(poly[j + 1][1] - poly[j][1], 2));
    }

    dist *= k;
    dist /= 50;
    cout << setprecision(10) << dist;
    return 0;
}