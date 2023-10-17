#include <bits/stdc++.h>

using namespace std;

bool preceeded;

void primeFactors(int k) {
    vector<int> factors;

    while (k % 2 == 0) {
        k /= 2;
        factors.push_back(2);
    }
    for (int i = 3; i * i <= k; i += 2) {
        while(k % i == 0) {
            k /= i;
            factors.push_back(i);
        }
    }
    if (k > 1) factors.push_back(k);

    if (preceeded) for (int i = 0; i < factors.size(); i++)
        cout << " x " << factors[i];
    else for (int i =0; i < factors.size(); i++) {
        cout << factors[i];
        if (i != factors.size() - 1) cout << " x ";
    }
}

int main() {
    int g;
    while(scanf("%d", &g), g) {
        cout << g << " = ";
        preceeded = false;
        if (g < 0) cout << "-1", preceeded = true, g *= -1;

        primeFactors(g);
        cout << "\n";
    }
    return 0;
}