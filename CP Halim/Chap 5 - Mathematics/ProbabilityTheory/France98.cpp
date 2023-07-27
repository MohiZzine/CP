//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

string nations[17];
int proba[17][17];
double res[17];
int main() {
    memset(res, 0, sizeof(res));

    for (int i = 1; i <= 16; i++)
        cin >> nations[i];
    for (int i = 1; i <= 16; i++)
        for (int j = 1; j <= 16; j++)
            cin >> proba[i][j];

    for (int j = 1; j <= 16; j++) {
        if (j == 0)

        int k = 1;
        res[j] +=
    }
        cout << left << setw(10) << nations[j] <<
    return 0;
}