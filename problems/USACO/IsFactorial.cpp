#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int tmp = n, i = 1, prod = 1;
    if (n == 0) {
        cout << "0 is not a factorial of a number!";
    } else if (n == 1) {
        cout << "1 is the factorial of a number!";
    }

    while(prod < n) {
        i++;
        prod *= i;
    }

    if (prod == n) {
        printf("%d is a factorial", n);
    } else cout << "The number " << n << " is not a factorial";
    return 0;
}