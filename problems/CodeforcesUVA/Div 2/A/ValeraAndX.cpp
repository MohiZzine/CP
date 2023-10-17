//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int mat[n][n];
    for (int i = 0; i < n;i++)
        for (int j = 0; j< n; j++)
            cin >> mat[i][j];

    if (mat[0][0] != mat[0][1]) {
        cout << "NO"; return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        if (mat[i][i] != mat[i + 1][i + 1] || mat[n - i - 1][n - i - 1] != mat[n - i - 2][n- i - 2]) {
            cout << "NO"; return 0;
        }
    }

    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n && j != i; j++) {
            if ()
        }
    }


    return 0;
}