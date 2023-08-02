//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

const int MXN = 600;
int main() {
//    ios_base::sync_with_stdio(false);
    string X, Y;
    while(cin >> X) {
        cin >> Y;
        reverse(X.begin(), X.end());
        reverse(Y.begin(), Y.end());
        int arr[MXN];
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < X.length(); i++) {
            for (int j = 0; j < Y.length(); j++) {
                arr[i + j] += (X[i] - '0') * (Y[j] - '0');
            }
        }

        for (int u = 0; u < MXN - 1; u++) {
            arr[u + 1] += arr[u] / 10;
            arr[u] %= 10;
        }

        int i = MXN - 1;
        while(i > 0 && arr[i] == 0) i--;
        for (; i >= 0; i--) cout << arr[i];
        cout << endl;
    }

    return 0;
}