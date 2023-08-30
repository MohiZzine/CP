//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int const INF = 1e7 + 9;

int main() {
    int m, n;
    while(scanf("%d%d", &m, &n) == 2) {
        int matrix[m][n], new_matrix[n][m];
        for (int i = 0; i < m; i++) {
            int r; cin >> r;
            queue<int> nums, pos;
            if (r) {
                int p;
                for (int k = 0; k < r; k++) {
                    cin >> p; pos.push(p - 1);
                }
                int numb;
                for (int k = 0; k < r; k++) {
                    cin >> numb; nums.push(numb);
                }

                for (int j = 0; j < n; j++) {
                    if (!pos.empty() && j == pos.front()) matrix[i][j] = nums.front(), nums.pop(), pos.pop();
                    else matrix[i][j] = 0;
                }
            } else {
                for (int j = 0; j < n; j++) matrix[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                new_matrix[i][j] = matrix[j][i];
            }
        }
        cerr << "Output:" << endl;

        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            int nb = 0;
            queue<int> nums, pos;
            for (int j = 0; j < m; j++) {
                if (new_matrix[i][j] != 0) nb++, nums.push(new_matrix[i][j]), pos.push(j + 1);
            }
            if (nb) {
                cout << nb;
                while(!pos.empty()) {
                    int q = pos.front(); pos.pop();
                    cout << " " << q;
                }
                cout << endl;
                while(!nums.empty()) {
                    int q = nums.front(); nums.pop();
                    nb--;
                    cout << q;
                    if (nb) cout << " ";
                }
                cout << endl;
            } else {
                cout << 0 << endl << endl;
            }
        }
    }
    return 0;
}