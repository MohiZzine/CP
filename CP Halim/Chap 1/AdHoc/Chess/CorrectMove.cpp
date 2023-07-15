//
// Created by Student on 15/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int K, Q, new_state;
    while(scanf("%d %d %d", &K, &Q, &new_state) != EOF) {
        if (K == Q) {
            printf("Illegal state\n");
            return 0;
        }
        int row = Q / 8;
        if ((Q - new_state) % 8 != 0 && new_state - row * 8 > 8) {
            printf("Illegal move\n");
            return 0;
        } else {
//            if (abs(new_state - ))
        }
    }

    return 0;
}