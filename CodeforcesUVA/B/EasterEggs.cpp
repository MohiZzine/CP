//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

char colors[] = "ROYGBIV";
int findColor(char c) {
    for (int i = 0; i < 7; i++)
        if (colors[i] == c) return i;
}
int main() {
    int n; cin >> n;
    char eggs[n], first[n], last[n];
    for (int i = 0; i < 7; i++) {
        eggs[i] = colors[i];
        last[i] = first[i] = i;
    }

    for (int i = 7; i < n; i++) {
        for (int k = 0; k < 7; k++) {
            if ((abs(last[k] - i) <= 3) || (abs(i - first[k]) + 3) % n <= 3) continue;
            else {
                eggs[i] = colors[k];
                last[k] = i;
                break;
            }
        }
    }
    for (int i = 0; i< n; i++) {
        cout << eggs[i];
    }
    return 0;
}