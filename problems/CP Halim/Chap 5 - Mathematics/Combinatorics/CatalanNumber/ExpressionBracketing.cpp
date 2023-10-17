#include <bits/stdc++.h>

using namespace std;


const int MAX = 26;

long long cat[MAX + 1];
int main() {
    cat[0] = 1;
    cat[1] = 1;
    for (long long i = 2; i <= MAX; i++) cat[i] = cat[i - 1] * 2 * (2 * i - 1) / (i + 1);

    int n;
    while(scanf("%d", &n) != EOF) cout << cat[n - 1] << "\n";
    return 0;
}