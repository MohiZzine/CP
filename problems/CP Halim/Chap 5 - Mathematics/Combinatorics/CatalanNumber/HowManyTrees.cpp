#include <bits/stdc++.h>

using namespace std;

int n;

const int MAX = 1000;

int main() {
    unsigned long long cat[MAX + 1];
    cat[1] = 1; cat[2] = 2;
    for (int i = 3 ; i <= MAX; i++) cat[i] = 2 * (2 * i - 1) *  cat[i - 1] / (i + 1) ;
    while(scanf("%d", &n) != EOF) {
        cout << cat[n] << "\n";
    }
    return 0;
}