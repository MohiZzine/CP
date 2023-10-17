#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        auto delimiter = s.find('-');
        string first = s.substr(0, delimiter), second = s.substr(delimiter + 1, 4);
        int f = 0, base = 26 * 26;
        for (int i = 0; i < first.size(); i++) {
            f += base * (first[i] - 'A');
            base /= 26;
        }

        if (abs(f - stoi(second)) <= 100) cout << "nice";
        else cout << "not nice";
        cout << "\n";

    }
    return 0;
}