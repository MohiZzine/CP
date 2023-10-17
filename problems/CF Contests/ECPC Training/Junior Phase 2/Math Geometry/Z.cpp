#include <bits/stdc++.h>

using namespace std;

int main() {
    long double r, s; cin >> r >> s;
    if (r >= s / sqrt(2)) cout << "Circle";
    else if (r <= s / 2) cout << "Square";
    else cout << "Complex";
    return 0;
}