//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

double distance

string solve(int coords[4][2]) {
    bool parrall = false;


}

int main() {
    int T; cin >> T;
    for (int k = 1; k <= T; k++) {
        int coords[4][2];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> coords[i][j];
            }
        }
        printf("Case %d: "); cout << solve(coords) << "\n";
    }
    return 0;
}
