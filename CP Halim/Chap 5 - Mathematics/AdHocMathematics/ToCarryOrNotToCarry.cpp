//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

unsigned int n, m;
int main() {
    while(scanf("%d%d", &n, &m) != EOF) {
       cout << (n ^ m) << endl;
    }
    return 0;
}