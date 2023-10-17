//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {

    int G;
    while(scanf("%d", &G), G) {
        string word; cin >> word;
        int n = word.size();
        char original[word.size()], group[G];
        for (int i = 0; i < n; i++) {
            original[i] = word[i];
        }
        int i = 0;
        while(i < n) {
            for (int k = 0; k < n / G; k++) {
                printf("%c", original[i + n / G - k - 1]);
            }
            i +=  n / G;
        }
        printf("\n");
    }
    return 0;
}