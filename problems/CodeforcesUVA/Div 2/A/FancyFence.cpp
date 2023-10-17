//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    int sum = 0;
    int i = 0;
    while(i++ < t) {
        int a; cin >> a;
        if (360 % (180 - a) == 0) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}