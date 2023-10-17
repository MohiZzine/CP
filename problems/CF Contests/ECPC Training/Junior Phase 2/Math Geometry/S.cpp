#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c; cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid\n";
        double p = (a + b + c) / 2, area;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << area;
    } else cout << "Invalid";
    return 0;
}