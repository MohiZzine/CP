#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long combi[31][31];
    combi[0][0] = 1;
    for (int i = 0; i < 31; i++) combi[i][0] = 1, combi[i][i] = 1;
    for (int i = 1; i < 31; i++) {
        for (int k = 1; k <= i; k++) {
            combi[i][k] = combi[i - 1][k] + combi[i - 1][k - 1];
        }
        for (int k = i + 1; k < 31; k++) combi[i][k] = 0;
    }
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << combi[i][j] << " ";
        cout << "\n";
    }
   return 0;
}