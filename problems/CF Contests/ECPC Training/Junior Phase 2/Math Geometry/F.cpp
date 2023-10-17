#include <bits/stdc++.h>

using namespace std;

int main() {
    int ra, ca; cin >> ra >> ca;
    int A[ra][ca];
    for (int i = 0; i < ra; i++)
        for (int j = 0; j < ca; j++) cin >> A[i][j];

    int rb, cb; cin >> rb >> cb;
    int B[rb][cb];

    for (int i = 0; i < rb; i++)
        for (int j = 0; j < cb; j++) cin >> B[i][j];

    int prod[ra][cb];
    memset(prod, 0, sizeof prod);
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            for (int k = 0; k < rb; k++) {
                prod[i][j] += A[i][k] * B[k][j];
            }
            cout << prod[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}