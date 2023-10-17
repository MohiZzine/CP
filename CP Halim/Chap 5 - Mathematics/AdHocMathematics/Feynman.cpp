//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(scanf("%d", &n), n) {
        int i = 1;
        long long ans = 0;
        while(i < n) {
            i++;
            ans += pow(i, 2);
        }
        cout << ++ans << endl;
    }
    return 0;
}